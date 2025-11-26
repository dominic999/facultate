#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){

  int pipes[2];
  int pipeOk = pipe(pipes);
  if(pipeOk != 0){
    return 1;
  }

  int pid = vfork();
  if(pid == 0){
    close(pipes[1]);
    char buf;
    read(pipes[0], &buf, 1);
    printf("%c\n", buf);
    fflush(stdout);
    exit(0);
  }else if(pid > 0){
    close(pipes[0]);
    int retCOde;
    char* buf = "b";
    write(pipes[1], buf, 1);
    wait(&retCOde);
  }
  return 0;
}
