#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]){

  if (argc < 2) {
    return 1;
  }

  char* path = argv[1];
  char** args = malloc(argc * sizeof(char*));

  for (int i = 1; i < argc; i++) {
    args[i-1] = malloc(strlen(argv[i]) * sizeof(char));
    strcpy(args[i-1], argv[i]);
  }

  int fid = open(path, O_RDWR);
  char interpretor[32];
  char shebang[1024];
  char* interpretor_arguments[32];
  char* caracter_curent = malloc(sizeof(char));
  read(fid, caracter_curent, 1);

  //aici verific prima linie
  while(strcmp(caracter_curent, "\n") ){
    if (strcmp(caracter_curent, "!") == 0 || strcmp(caracter_curent, "#") == 0) {
      read(fid, caracter_curent, 1);
      continue;
    }
    strcpy(shebang+strlen(shebang), caracter_curent);
    read(fid, caracter_curent, 1);
  }
  
  char* curent = strtok(shebang, " ");
  int c = 0;
  while (curent != NULL) {
    interpretor_arguments[c] = malloc(strlen(curent) * sizeof(char));
    strcpy(interpretor_arguments[c++], curent);
    curent = strtok(NULL, " ");
  }
  strcpy(interpretor, interpretor_arguments[0]);
  strcpy(interpretor_arguments[c++], path);
  interpretor_arguments[c] = NULL;
  
  int pid = fork();
  if(pid == 0){
    execv(interpretor, interpretor_arguments);
    exit(1);
  }else if (pid > 0) {
    int c;
    wait(&c);
  }

  return EXIT_SUCCESS;
}

