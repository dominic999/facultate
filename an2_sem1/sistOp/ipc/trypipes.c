#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <fcntl.h>

int a = 0;

int main(){
  
  char* path = "e";
  int cp = fork();
  if (cp < 0){
    return 1;
  }
  if(cp == 0){
    int fd = open(path, O_RDONLY);
    char buf[256];
    read(fd, buf, 256);
    printf("%s\n", buf);
    close(fd);
  }else if(cp > 0){
    int fd = open(path, O_WRONLY);
    char buf[256] = "am facut un pipe";
    int code = write(fd, buf, 256);
    close(fd);
  }
  return 0;
}
