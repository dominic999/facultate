#include "semaphore.h"
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>


semaphore_t sem;  
void* myprint(void* str){
  char* strNew = (char*)str;
  char c;

  sem.down(&sem);
  for(c = *strNew; c=*strNew++;){
    write(1, &c, 1);
  }
  sem.up(&sem);
}

void* my_print_10 (void* str){
  for(int i = 0; i < 10; i++){
    myprint(str);
  }
}

pthread_cond_t space, items;

 
int main(){

  sem.init = init; 
  sem.init(&sem, 1);
  pthread_t producer_thread, cunsumer_thread;
  void* thread_return;
  if (pthread_create(&producer_thread, NULL, my_print_10, "Hello1\n") ||
      pthread_create(&cunsumer_thread, NULL, my_print_10, "Hellor2\n")){
    exit(1);
  };
  if(pthread_join(producer_thread, &thread_return)){
    exit(1);
  }
  if(pthread_join(cunsumer_thread, &thread_return)){
    exit(1);
  }


  return 0;
}


