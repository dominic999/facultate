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
  do{
    scanf("%s", buf);
    write(code, buf, 64);
  }while(strcmp(buf,end) != 0);
  
  close(code);
  return 0;
}
