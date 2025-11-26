#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main(){

  int pipes[2];
  int pipeOk = pipe(pipes);
  if(pipeOk != 0){
    return 1;
  }

  int pid = fork();
  if(pid == 0){
    char buf[64];
    read(pipes[0], buf, 64);
    printf("%s", buf);
    char* done = "done\n";
    write(pipes[1], done, strlen(done));
    fflush(stdout);
    exit(0);
  }else if(pid > 0){
    int retCOde;
    char* buf = "Hello world\n";
    write(pipes[1], buf, strlen(buf));
    char done[64];
    read(pipes[0], done, 64);
    printf("%s", done);
    wait(&retCOde);
  }
  return 0;
}

//asta nu merge pentru ca parintele scrie, apol tot el citeste si copilul se blocheaza cand vrea sa citeassca pentru ca nu mai are ce sa citeasca
