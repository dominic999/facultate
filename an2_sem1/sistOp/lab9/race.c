#include <unistd.h>
#include <sys/sem.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>

typedef union semun {
  int val;
  struct semid_ds* buf;
  int* array;
}semun;

void* myprint(void* str){
  char* strNew = (char*)str;
  char c;

  for(c = *strNew; c=*strNew++;){
    write(1, &c, 1);
  }
}

void* my_print_10 (void* str){
  for(int i = 0; i < 10; i++){
    myprint(str);
  }
}

 
int main(){

#ifdef FIXED
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
  arg.val = 1;
  semctl(id_semafor, 0, SETVAL, arg);
#endif
  int id = fork();
  if( id == 0 ){
#ifdef FIXED
    semop(id_semafor, &down,1);
#endif
    char* copil = "Copil\n";
    my_print_10(copil);
#ifdef FIXED
    semop(id_semafor, &up,1);
#endif
  }else{
#ifdef FIXED
    semop(id_semafor, &down,1);
#endif
    char* parinte = "parinte\n";
    my_print_10(parinte);
#ifdef FIXED
    semop(id_semafor, &up,1);
#endif
  }
#ifdef FIXED
  semctl(id_semafor, IPC_RMID, 0);
#endif
  return 0;
}


