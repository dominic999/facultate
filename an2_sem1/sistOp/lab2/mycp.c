#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char* argv[]){

  if (argc < 3){
    return 1;
  }
  
  char dir[100] = "/home/domi/facultate/an2_sem1/sistOp/lab2/";
  char readPath[120];
  char writePath[120];
  // strcpy(readPath, dir);
  // strcat(readPath, argv[1]);
  strcpy(readPath, argv[1]);
  strcpy(writePath, dir);
  strcat(writePath, argv[2]);
  printf("%s\n", argv[1]);
  int readCode = open(argv[1], O_RDWR, 0644);
  int writeCode = creat(writePath, O_CREAT);
  //fcntl
  printf("read: %d, write:  %d\n", readCode, writeCode);
  char buf[256];
  int ret_code;
  // fcntl(readCode, F_SETFL, O_NONBLOCK);
  while((ret_code = read(readCode, buf, 256)) > 0){
    printf("buf: %s\n", buf);
    write(writeCode, buf, ret_code) ;
    printf("esete okk\n");
  }

  close(readCode);
  close(writeCode);


  return 0;
}

