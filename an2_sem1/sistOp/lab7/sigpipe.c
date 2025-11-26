#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void signalHandler(int sig){
  printf("Caught signal %d\n", sig);
}

int main(){

  // signal(SIGPIPE, signalHandler);
  int pipes[2];
  int pipeOk = pipe(pipes);
  if(pipeOk != 0){
    return 1;
  }

  int pid = fork();
  if(pid == 0){
    close(pipes[0]);
    sleep(1);
    exit(0);
  }else if(pid > 0){
    int retCOde;
    close(pipes[0]);
    sleep(2);
    char* buf = "salut";
    int writeCode = write(pipes[1], buf, strlen(buf));
    if(writeCode == -1){
      if(errno == EPIPE){
        printf("error pipe\n");
      }
    }
    printf("Val write: %d\n", writeCode);
    fflush(stdout);
    wait(&retCOde);
  }
  return 0;
}

//asta nu merge pentru ca parintele scrie, apol tot el citeste si copilul se blocheaza cand vrea sa citeassca pentru ca nu mai are ce sa citeasca
