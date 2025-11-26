#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/fcntl.h>
#include <unistd.h>
#include <fcntl.h>


int main(){

  int fdParinte[2], fdCopil[2];
  pipe(fdCopil);
  pipe(fdParinte);
  pid_t pid = fork();

  if(pid < 0){
    return 1;
  }
  if(pid == 0){
    char buf[64];
    char* end = "end";
    close(fdParinte[0]);
    close(fdCopil[1]);
    scanf("%s", buf);
    write(fdParinte[1], buf, 64);
    while(strcmp(buf, end) != 0){
      read(fdCopil[0], buf, 64);
      printf("parintele a transmis: %s\n", buf);
      scanf("%s", buf);
      write(fdParinte[1], buf, 64);
    }
  }else if(pid > 0){
    char buf[64];
    char* end = "end";
    close(fdParinte[1]);
    close(fdCopil[0]);
    read(fdParinte[0], buf, 64);
    while(strcmp(buf, end) != 0){
      printf("copilul a transmis: %s\n", buf);
      char parinte[64];
      printf("acum citeste parintele de la tastatura\n");
      scanf("%s", parinte);
      write(fdCopil[1], parinte, 64);
      read(fdParinte[0], buf, 64);
    }

  }
  return 0;
}
