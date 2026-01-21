#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/sem.h>
#include <sys/wait.h>


typedef union semun {
  int val;
  struct semid_ds* buf;
  int* array;
}semun;


int main(){

  int id_semafor = semget(IPC_PRIVATE, 1, IPC_CREAT | 0644);
  semun arg;
  struct sembuf down;
  down.sem_num = 0;
  down.sem_op = -1;
  down.sem_flg = 0;
  struct sembuf up;
  up.sem_num = 0;
  up.sem_op = 1;
  up.sem_flg = 0;
  arg.val = 0;
  semctl(id_semafor, 0, SETVAL, arg);
  
  int copil1 = fork();
  if(copil1 == 0){
    sleep(5);
    printf("copil1\n");
    semop(id_semafor, &up, 1);
    exit(0);
  }  

  if(!fork()){
    sleep(1);
    semop(id_semafor, &down, 1);
    printf("copil2\n");
    exit(0);
  }

  while(wait(NULL) > 0);
  semctl(id_semafor, IPC_RMID, 0);
  return 0;
}
