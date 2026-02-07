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

  int pid = fork();

  if (pid == 0) {
    char path[20] = "/bin/";
    // strcpy(path+strlen(path), argv[1]);
    // printf("%s\n", path);
    char* newargs[]  = {argv[1], NULL};
    printf("%s\n", newargs[0]);
    execvp(newargs[0], newargs);
  }else if (pid > 0) {
    int c;
    wait(&c);
  }

  return EXIT_SUCCESS;
}

