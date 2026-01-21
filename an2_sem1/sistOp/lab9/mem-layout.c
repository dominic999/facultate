#include <stdio.h>
#include <sys/shm.h>
#include <alloca.h>
#include <stdlib.h>
#include <unistd.h>

int g_in = 2;
char g_arr[4000];

int main(int argc, char* argv[]){

  int aloc = 1;
  char* aloca = alloca(sizeof(char) * 1000);
  char* maloc = malloc(sizeof(char) * 1000);
  int shared_mem = shmget(IPC_PRIVATE, 100, IPC_CREAT);

  printf("%p\n", main);
  printf("%p\n", argv);
  printf("%p\n", &g_in);
  printf("%p\n", g_arr);
  printf("%p\n", &(g_arr[3999]));
  printf("%p\n", &aloc);
  printf("%p\n", aloca);
  printf("%p\n", &(aloca[999]));
  printf("%p\n", maloc);
  printf("%p\n", &(maloc[999]));
  printf("%p\n", sbrk(0));
  if(shared_mem != -1){
    printf("%p\n", shmat(shared_mem, 0, 0));
  }

  shmctl(shared_mem, IPC_RMID, 0);

  free(maloc);
  return 0;
}
