#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

void myprint(char* str){
  char c;
  for(c = *str; c=*str++;){
    write(1, &c, 1);
  }
}

int main(){

  pid_t pid = fork();
  if (pid < 0){
    printf("eroare 1\n");
    return 1;
  }else if(pid == 0){
    for(int i = 0; i < 10; i++)
    myprint("this is the child process printing\n");
  }else{
    for(int i = 0; i < 10; i++)
    myprint("this is the parent proceess printing\n");
  }
  return 0;
}


