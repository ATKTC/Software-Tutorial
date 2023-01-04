# include <stdio.h>

int main(){
    char character = 'Y';
    int x , y;
    while(character == 'Y'){
        printf("Insdie the while loop\n");
        scanf("%d %d",&x, &y); // first scanf
        // fflush(stdin);
        // getchar(); // solution 2
        printf("the second scanf\n");
        scanf("%c", &character); // second scanf 
        // scanf(" %c", &character); // second scanf // solution 1
    }

    // scanf is dynamic input
    // possible reason: the next scanf absorb the enter that the user input

    printf("Outside of the loop\n");
    printf("the charcter is %c\n", character);
    return 0;
}