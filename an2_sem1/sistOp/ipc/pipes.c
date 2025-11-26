#include <stdio.h>
#include <stdlib.h>
#include <sys/_types/_pid_t.h>
#include <unistd.h>
#include <fcntl.h>

int main(){

  int fd[2];
  printf("%c[%dC", 27, 20);
  return 1;
  int code = pipe(fd);
  pid_t cp = fork();
  if (cp < 0){
    return 1;
  }else if(cp == 0){
    char buf;
    while(1){
      read(fd[0], &buf, 1);
      printf("buf: %c\n", buf);
      if(buf == 'l'){
        printf("da");
      }
    }

  }else{
    char buf;
    while(1){
      scanf("%c\b", &buf);
      int c = write(fd[1], &buf, 1);
      if (buf == '0'){
        break;
      }
    }
  }
  return 0;
}
