#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <fcntl.h>


int main(){

  char* path = "pipe";
  int code = open(path, O_RDWR);
  char buf[64];
  char* end = "end";
  char* l = "l";
  do{
    read(code, buf, 64);
    if(strcmp(buf, l) == 0){
      printf("%c[%dC", 27 ,10);
    }else
      printf("am primit: %s\n", buf);
  }while(strcmp(buf, end) != 0);

  close(code);
  return 0;
}
