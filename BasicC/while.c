#include <stdio.h>

int main(){
    int x = 0;
    while(1){
        while (1)
        {
            if(x==10) break;
            ++x;
            printf("inner   %d\n", x);
        }
        printf("outer\n");
    }
}

// int func(int array)z