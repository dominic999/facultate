#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

  int pid = fork();
  if(pid == 0){
    printf("asta este copilul\n");
    exit(1);
  }else{
    sleep(11);
    printf("asta este tatal");
  }

  return 0;
}
