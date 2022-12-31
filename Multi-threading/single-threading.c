/* single-thread.c */
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void* print_function(){
    for(int i = 0; i < 10; ++i)
        printf("Hello World\n");
}

int main() 
{
    pthread_t threadID;
    int result;

    result = pthread_create(&threadID, NULL, print_function, NULL);

    pthread_join(threadID, NULL);

    return 0;
}