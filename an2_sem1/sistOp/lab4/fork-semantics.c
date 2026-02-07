#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int global = 6;
char* buf = "unbuffered write to stdout\n";

int main(int argc, char *argv[]){

  int local = 10;
  write(1, buf, strlen(buf));
  printf("inainte de fork\n");
  fflush(stdout);
  int pid = fork();
  if(pid == 0){
    local++; global++;
  }else if(pid > 0){
    sleep(2);
  }
  printf("%d, %d, %d\n", pid, local, global);


  return EXIT_SUCCESS;
}
