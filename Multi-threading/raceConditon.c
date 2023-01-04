/* single-thread.c */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;
const int size = 10000000; 

pthread_mutex_t m1 = PTHREAD_MUTEX_INITIALIZER;

void* thread1_fun(void *para){
    // pthread_mutex_lock(&m1);
    for(int i = 0; i < size; ++i){
        ++counter;
    }
    // pthread_mutex_unlock(&m1);
    return NULL;
}

void* thread2_fun(void *para){
    // pthread_mutex_lock(&m1);
    for(int i = 0; i < size; ++i){
        --counter;
    }
    // pthread_mutex_unlock(&m1);
    return NULL;
}

int main() 
{
    pthread_t tid1, tid2;


    char *message1 = "Thread 1";
    char *message2 = "Thread 2";

    printf("%d\n", counter);
    
    pthread_create(&tid1, NULL, &thread1_fun, (void*)message1);
    pthread_create(&tid2, NULL, &thread2_fun, (void*)message2);

    pthread_join(tid1, NULL);
    pthread_join(tid2, NULL);

    printf("%d\n", counter);

    return 0;
}