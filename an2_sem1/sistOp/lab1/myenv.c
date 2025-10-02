#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[], char *envp[]){
  
  if (argc < 1){
    return 1;
  }

  int i = 0;
  printf("%s\n", envp[0]);
  // while ( strcmp(envp[i], argv[1]) != 0 ){
  //   console.log
  //   i++;
  // }
  // printf("%s\n", envp[i]);


  return 0;
}
