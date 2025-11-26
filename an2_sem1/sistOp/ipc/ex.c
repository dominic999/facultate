#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){

  if(argc < 2){
    return 1;
  }
  printf("%s\n", argv[1]);
  char* newarg[] = {"bash", NULL};
  char*  newenv[] = {NULL};
  execvp(argv[1], newarg);

  return 0;
}
