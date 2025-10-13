#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]){

  int readCode = creat(argv[1], O_CREAT);
  int code;
  char buf[] = "aa";
  write(readCode, buf, 2);
  lseek(readCode, 100, SEEK_CUR);
  write(readCode, buf, 2);
  close(readCode);

  return 0;
}
