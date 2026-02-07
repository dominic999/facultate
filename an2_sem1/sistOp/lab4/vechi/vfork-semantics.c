#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int a = 6;
const char buf[] = "unbuffered write to stdout\n";


int main(){
  int b = 10;
  int fd = 1;
  write(fd, buf, strlen(buf));
  printf("inainte de fork\n");
  pid_t pid = vfork();
  if(pid == 0){
    b++;
    a++;
    exit(0);
  }
  printf("pid: %d\n", getpid());
  printf("global: %d\n", a);
  printf("local: %d\n", b);

  return 0;
}

