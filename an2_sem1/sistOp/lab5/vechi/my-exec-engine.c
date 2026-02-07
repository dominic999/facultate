#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]){

  int* code;
  if(argc < 2){
    return 0;
  }
  int pid = fork();
  if(pid == 0){
    execvp(argv[1], &argv[1]);
  }else if(pid > 0){
    int cd = wait(code);
  }
  return 0;
}
