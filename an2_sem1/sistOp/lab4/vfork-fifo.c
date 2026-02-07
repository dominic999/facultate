#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[]){

  char* path = "fifo";
  int id = open(path, O_RDWR);
  int pid = vfork();

  if(pid == 0){
    char c;
    read(id, &c, 1);
    printf("%d %c \n", pid, c);
    exit(0);
  }else if (pid > 0) {
    char* c = "a";
    write(id, c, 1);
  }

  return EXIT_SUCCESS;
}
