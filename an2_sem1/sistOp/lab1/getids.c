#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){

  int pid = getpid();
  int uid = getuid();
  int gid = getgid();
  printf("pid: %d\n", pid);
  printf("uid: %d\n", uid);
  printf("gid: %d\n", gid);
  return 0;
}
