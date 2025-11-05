#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int parse(char** newArgv, char* command);
int removeNew(char* ceva);

int main(int argc, char* argv[]){
  char command[64]; 
  char bin[64] = "/usr/bin/";
  int lenBin = strlen(bin);
  int bytesR;
  do{
    printf("my-shell> ");
    fflush(stdout);
    bytesR = read(STDIN_FILENO, command, 63);
    command[bytesR] = '\0';
    int pid = fork();
    if(pid == 0){
      char* newArgv[64];
      int newArgc = parse(newArgv, command);
      for(int i = 0; i < newArgc; i++){
        newArgv[i][strlen(newArgv[i])-1] = '\0';
        printf("%s\n", newArgv[i]);
      }
      newArgv[newArgc] = NULL;
      char* newEnvp[] = {NULL};
      char* newBin = strcpy(bin+lenBin, newArgv[0]);
      fflush(stdout);
      execve(bin, newArgv, newEnvp);
      exit(0);
    }else if(pid > 0){
      int retCode;
      wait(&retCode);
    }
  }while( bytesR > 0);

  return 0;
}

int parse(char** newArgv, char* command){
  char* token = strtok(command, " ");
  int i = 0;
  while(token != NULL){
    newArgv[i++] = token;
    token = strtok(NULL, " ");
  }
  return i;
}

