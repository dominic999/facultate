#include <stdlib.h>
#include <stdio.h>

int main(){

  char path[] = "BFS.in";
  FILE* input = fopen(path, "r");
  int st, dr, cod;
  
  while((cod = fscanf(input, "%d %d", &st, &dr)) == 2){
    printf("%d, %d\n", st, dr);
    printf("%d\n", cod);
  }

  return 0;
}
