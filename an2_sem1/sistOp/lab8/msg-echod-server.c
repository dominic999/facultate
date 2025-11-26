#include <stdio.h>
#include <stdlib.h>
#include <sys/msg.h>
#include <sys/ipc.h>

#define BUFF_SIZE 64

tpyedef struct msg {
  long mtype;
  char mtext [BUFF_SZIZE];
}msg;

int type = get_pid();

int main(){

  key_t key = ftok("~/dev/null", 1300);
  msg m;
  
  int msgid = msgget(key, IPC_CREAT | 0644);
  int n;
  while((n = msrcv(msgid, &m,)))

  
  return 0;
}
