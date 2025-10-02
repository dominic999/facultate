#include<string.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[], char* envp[]){
  
  if (argc < 1){
    return 1;
  }

  char var[255];

  int ret_code = read(0, var, 255);
  if (ret_code < 0){
    puts("eroare");
    return 1;
  }

  int i = 0;
  while (strncmp(var, envp[i++], ret_code-1) != 0);
  printf("raspuns: %s\n", envp[--i]);

  

  return 0;
}
