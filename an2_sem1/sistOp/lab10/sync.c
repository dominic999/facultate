#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/sem.h>
#include <sys/wait.h>
#include <pthread.h>


pthread_mutex_t mutex;
pthread_cond_t cond_var;
pthread_t producer_thread, cunsumer_thread;
void* thread_return;
int a = 0;

void* firstChild(void* ceva){
  pthread_mutex_lock(&mutex);
  sleep(1);
  printf("First child\n");
  a=1;
  pthread_cond_signal(&cond_var);
  pthread_mutex_unlock(&mutex);
}

void* secondChild(void* ceva){
  pthread_mutex_lock(&mutex);
  while(a == 0){
    pthread_cond_wait(&cond_var, &mutex);
  }
  pthread_mutex_unlock(&mutex);
  sleep(5);
  printf("Second child\n");
}


int main(){

  pthread_mutex_init(&mutex, NULL);
  pthread_cond_init(&cond_var, NULL);
  

  if (pthread_create(&producer_thread, NULL, firstChild, NULL) ||
      pthread_create(&cunsumer_thread, NULL, secondChild, NULL)){
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
