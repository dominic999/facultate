#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]){

  int fileId = open(argv[1], O_RDWR);
  char buf[1];
  int ret_code;
  char cmp[] = "\0";
  int sum = 0;
  while ((ret_code = read(fileId, buf, 1)) > 0){
    if(strcmp(cmp, buf) != 0){
      sum++;
    }
  }

  return 0;
}
