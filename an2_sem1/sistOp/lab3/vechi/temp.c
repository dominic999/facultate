#include <stdio.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]){

  char* path = "tempfile";
  int fid = open(path, O_RDWR);
  unlink(argv[1]);
  printf("sters\n");
  sleep(15);
  char buf[256];
  read(fid, buf, 256);
  printf("continut temp: %s\n", buf);
  return 0;
}
