#include <stdio.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <fcntl.h>

int main(int argc, char* argv[]){
  
  if(argc < 2)
    return 1;
  
  DIR* director = opendir(argv[2]);
  char* flag = "-l";
  struct dirent* entry_actual;
  while(entry_actual = readdir(director)){
    if(strcmp(argv[1], flag) == 0){
      struct stat actual;
      stat(entry_actual->d_name, &actual);
      if(S_ISREG(actual.st_mode)){
        printf("%s IS REG FILE\n", entry_actual->d_name);
      }else{
        printf("%s IS NOT A REG FILE\n", entry_actual->d_name);
      }
    }else{
      printf("%s\n", entry_actual->d_name);
    }
  }

  return 0;
}
