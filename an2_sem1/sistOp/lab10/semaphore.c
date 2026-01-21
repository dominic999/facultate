#include "semaphore.h"

void* down (semaphore_t* sem){
  pthread_mutex_lock(&(sem->mutex));
  if (sem->counter > 0){
    sem->counter--;
    pthread_mutex_unlock(&(sem->mutex));
    return NULL;
  }
  pthread_cond_wait(&(sem->condition), &(sem->mutex));
  pthread_mutex_unlock(&(sem->mutex));
  return NULL;
}

void* up (semaphore_t* sem){
  pthread_mutex_lock(&sem->mutex);
  sem->counter++;
  pthread_cond_signal(&sem->condition);
  pthread_mutex_unlock(&sem->mutex);
  return NULL;
}

void* init(semaphore_t* sem, int a){
  pthread_mutex_init(&sem->mutex, NULL);
  pthread_cond_init(&sem->condition, NULL);
  sem->counter = a;
  sem->down = down;
  sem->up = up;
}
