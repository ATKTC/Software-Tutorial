/* single-thread.c */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

sem_t sem1, sem2;

void* thread1_fun(void *para){
    for(int i = 0; i < 10; ++i){
        sem_wait(&sem1);
        printf("Hello");
        sem_post(&sem2);
    }
    return NULL;
}

void* thread2_fun(void *para){
    for(int i = 0; i < 10; ++i){
        sem_wait(&sem2);
        printf("World\n");
        sem_post(&sem1);
    }
    return NULL;
}

int main() 
{
    pthread_t tid1, tid2;

    char *message1 = "Thread 1";
    char *message2 = "Thread 2";

    sem_init(&sem1, 0, 1);
    sem_init(&sem2, 0, 0);
    
    pthread_create(&tid1, NULL, &thread1_fun, (void*)message1);
    pthread_create(&tid2, NULL, &thread2_fun, (void*)message2);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    return 0;
}