#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

void myprint(char* str){
  char c;
  int i = 0;
  while(i < strlen(str)){
    c = str[i++];
    write(1, &c, 1);
  }
}

int main(int argc, char *argv[]){

  char* parinte = "asta este parintele\n";
  char* copil = "asta este copil\n";
  int pid = fork();
  if(pid == 0){
    for(int i = 0; i < 10; i++){
      myprint(copil);
    }
    exit(1);
  }else if(pid > 0){
    for (int i =0; i < 10; i++) {
      myprint(parinte);
    }
  }

  return EXIT_SUCCESS;
}
