#include <_stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(){

  int p[2];
  char* path = "out";
  int pid = fork();
  char buf[256] = {"am scirs in fisier"};
  if(pid == 0){
    printf("copil pid: %d", getpid());
    exit(0);
  }if(pid > 0){
    printf("parinte pid: %d", getpid());
    sleep(50);
    int* ceva;
    waitpid(pid, ceva, 0);
    printf("s-a terminat copilu\n");
  }

  return 0;
}
