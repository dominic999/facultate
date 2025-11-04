#include <stdio.h>
#include <stdlib.h>
#include <unist.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char* argv[]){
  char comanda[64]; 
  while((int code = read(STDIN_FILENO), comanda, 64) > 0){

  }


  
  return 0;
}
