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
  printf("ceva\n");
  pid_t pid = fork();
  if(pid == 0){
    b++;
    a++;
  }else if(pid > 0){
    // sleep(2);
  }
  printf("pid: %d\n", getpid());
  write(fd, buf, strlen(buf));
  printf("global: %d\n", a);
  printf("local: %d\n", b);

  return 0;
}

