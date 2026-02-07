#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  if(argc < 3)
    return 1;

  for(int i = 1; i < argc; i++){
    struct stat new;
    stat(argv[i], &new);
    if(S_ISREG(new.st_mode))
      printf("normal file");
    else if(S_ISDIR(new.st_mode))
      printf("directory");
    else if (S_ISCHR(new.st_mode)) 
      printf("is char dev");
    
  }

  return 0;
}
