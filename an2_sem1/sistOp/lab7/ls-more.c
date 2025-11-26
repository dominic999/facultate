#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){

  int pipes[2];
  pipe(pipes);

  int pid1 = fork();
  if (pid1 == 0){
    close(pipes[0]);
    close(1);
    dup(pipes[1]);
    char* newArgs[] = {"ls", "/usr/bin/ls", "-l", NULL};
    execlp("ls", "ls", "-l", NULL);
    // execvp(newArgs[0], newArgs);
    exit(1);
  }

  int pid2 = fork();
  if(pid2 == 0){
    close(pipes[1]);
    close(0);
    dup(pipes[0]);
    execlp("less", "less", NULL);
    // execvp(newArgs[0], newArgs);
  }
  
  close(pipes[0]);
  close(pipes[1]);
  int cod;
  waitpid(pid1, &cod, WCONTINUED);
  waitpid(pid2, &cod, WCONTINUED);

  return 0;
}
