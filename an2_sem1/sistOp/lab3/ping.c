#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(){
  
  char* path = "fifo_nou";
  int fid = open(path, O_RDWR);
  char* buf = "ping\n";
  write(fid, buf, strlen(buf));
  sleep(5);
  char citire[16];
  read(fid, citire, 16);
  printf("%s\n", citire);
  
  return 0;
}
