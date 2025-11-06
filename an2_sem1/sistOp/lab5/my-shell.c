#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int parse(char** newArgv, char* command);

int main(int argc, char* argv[]){
  char command[64]; 
  char bin[64] = "/usr/bin/";
  int lenBin = strlen(bin);
  int bytesR;
  int isScript= 0;
  do{
    printf("my-shell> ");
    fflush(stdout);
    bytesR = read(STDIN_FILENO, command, 63);
    command[bytesR] = '\0';
    int pid = fork();
    int interpretorArgs = 0;
    if(pid == 0){
      char* newArgv[64];
      char* inlineArguments = malloc(sizeof(char) * 64);;
      //verific daca este un script
      if(command[0] == '.' && command[1] == '/'){
        isScript = 1;
        int intRead;
        //aici scot ./ de la inceputul comenzii
        strcpy(command, &(command[2]));
        if(command[strlen(command)-1] == '\n'){
          command[strlen(command)-1] = '\0';
        }
        char interpretor[64];
        //aici separ numele scriptului
        char* scriptName = strtok(command, " ");
        //aici iau ce vine dupa numele scriptului
        inlineArguments = strtok(NULL, " ");
        printf("scriptname: %s\n", scriptName);
        fflush(stdout);
        printf("inline: %s\n", inlineArguments);
        fflush(stdout);
        //aici scot \n de la finalul comenzii
        printf("comanda: %s\n", command);
        fflush(stdout);
        //aici deschid fisierul cu scriptul
        int script = open(scriptName, O_RDWR);
        int counter = 0;
        //citesc primul rand, unde gasesc numele interpretorului si opresc citirea la \n
        while(read(script, &(interpretor[counter]), 1) == 1){
          printf("cititi din interpretor: %c\n", interpretor[counter]);
          //scot \n de la final
          if(interpretor[counter] == '\n'){
            interpretor[counter] = '\0';
            break;
          }
          counter++;
        }
        printf("asta este interpretorul: %s\n", interpretor);
        fflush(stdout);
        interpretorArgs = parse(newArgv, interpretor);
        //dau de la 2 ca sa cor !# de la inceput
        strcpy(newArgv[0], &(newArgv[0][2]));
      }
      int newArgc = parse(&(newArgv[interpretorArgs]), command);
      for(int i = 0; i < newArgc; i++){
        if(newArgv[i+interpretorArgs][strlen(newArgv[i+interpretorArgs])-1] == '\n'){
          newArgv[i+interpretorArgs][strlen(newArgv[i+interpretorArgs])-1] = '\0';
        }
      }
      int inlineArgs = parse(&(newArgv[interpretorArgs + newArgc]), inlineArguments);
      for(int i = 0; i < newArgc + interpretorArgs + inlineArgs; i++){
        printf("argv: %s\n", newArgv[i]);
        fflush(stdout);
      }
      newArgv[newArgc + interpretorArgs + inlineArgs] = NULL;
      char* newEnvp[] = {NULL};
      if(!isScript){
        char* newBin = strcpy(bin+lenBin, newArgv[0]);
        execve(bin, newArgv, newEnvp);
      }else{
        execve(newArgv[0], newArgv, newEnvp);
      }
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


