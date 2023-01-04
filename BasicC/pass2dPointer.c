#include <stdio.h>

int function(int ptr[][2]) {
    return ptr[0][0];
}

int functionByPtr(int *arr){
    // return arr[1];
    return *(arr + 1);  // pointer arthmatics same as above
}

int main(){
    int ptr[][2] = {};
    int ptr2 [2][2];
    function(ptr);
    return 0;
}