#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int main(int argc, char* argv[]){

  int fd = open(argv[1], O_RDWR);
  char interpreter[64];
  char* argvnew[20];
  char buf = 'a';
  int code;
  int i = 0;
  while((code = read(fd, &buf, 1)) > 0 && buf != '\n'){
    if(buf != '!' && buf != '#'){
      interpreter[i++] = buf;
    }
  }
  printf("%s\n", interpreter);
  char* token = strtok(interpreter, " ");
  i = 0;
  while (token != NULL){
    printf("%s\n", token);
    argvnew[i] = (char*)malloc(sizeof(char) * (strlen(token)+1));
    strcpy(argvnew[i++], token);
    token = strtok(NULL, " ");
  }
  int pid = fork();
  if(pid == 0){
    for (int j = 0; j < argc; j++){
      if(j == argc-1){
        argvnew[j+i] = NULL;
      }else{
        argvnew[j+i] = argv[j+1];
      }
    }
    char* envnew[] = {NULL};
    execve(interpreter, argvnew, envnew);
  }else if(pid > 0){
    int* retCode;
    wait(retCode);
  }
  return 0;
}
