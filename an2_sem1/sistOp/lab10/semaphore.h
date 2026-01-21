#include <pthread.h>

typedef struct semaphore semaphore_t;

struct semaphore{
  int counter;
  pthread_cond_t condition;
  pthread_mutex_t mutex;
  void* (*init)(semaphore_t* sem, int a);
  void* (*down)(semaphore_t* sem);
  void* (*up)(semaphore_t* sem);
};


void* down (semaphore_t* sem);

void* up (semaphore_t* sem);

void* init(semaphore_t* sem, int a);
