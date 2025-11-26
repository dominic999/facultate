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

  int pid = fork();
  if(pid == 0){
    close(pipes[1]);
    char buf[64];
    read(pipes[0], buf, 64);
    printf("%s", buf);
    fflush(stdout);
    exit(0);
  }else if(pid > 0){
    close(pipes[0]);
    int retCOde;
    char* buf = "Hello world\n";
    write(pipes[1], buf, strlen(buf));
    wait(&retCOde);
  }
  return 0;
}
