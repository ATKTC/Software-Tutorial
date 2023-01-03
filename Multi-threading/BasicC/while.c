#include <stdio.h>

int main(){
    int x = 0;
    while(1){
        while (1)
        {
            if(x++) 
                break;
            
            printf("inner\n");
        }
        printf("outer\n");
    }
}

// int func(int array)z