#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(){

  pid_t pid = fork();
  if (pid < 0){
    printf("eroare 1\n");
    return 1;
  }else if(pid == 0){
    printf("copil: %d\n", getpid());
  }else{
    printf("parinte: %d\n", getpid());
    sleep(50);
  }
  return 0;
}


