#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int argc, char* argv[]){

  struct stat* buf;

  for(int i = 1; i < argc; i++){
    lstat(argv[i], buf);
    if(S_ISREG(buf->st_mode)){
      printf("fisier\n");
    }else if(S_ISDIR(buf->st_mode)){
      printf("director\n");
    }else if(S_ISFIFO(buf->st_mode)){
      printf("fifo\n");
    }else if(S_ISLNK(buf->st_mode)){
      printf("link\n");
    }

  }

  return 0;
}
