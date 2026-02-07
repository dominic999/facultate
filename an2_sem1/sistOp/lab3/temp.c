#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

  char* path = "tempfile";
  const int fid =  open(path, O_RDWR);
  unlink(path);
  printf("am sters tempfile\n");
  sleep(15);
  char buf[64];
  read(fid, buf, 64);
  printf("%s\n", buf);
  close(fid);
  
  return 0;
}
