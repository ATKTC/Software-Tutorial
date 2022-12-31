/* IRSensor.c */
#include "IRSensor.h"
#include <time.h>

// Global variables
int sensorArray[NUM_OF_IRSENSOR];

// Dont modify the function
// modify value in sensorArray
void readIRSensor(){

    srand(time(NULL));

    static int pos = NUM_OF_IRSENSOR/2;

    // BackGround Noise, but below threshold
    for(int i = 0 ; i < NUM_OF_IRSENSOR; ++i){
        sensorArray[i] = rand() % THRESHOLD;
    }

    // oscillating left and right
    pos += rand() % LENGTH;
    pos -= rand() % LENGTH;
    
    // cap
    int amt = LENGTH;
    if(pos < 0 ){
        pos = 0;
        amt = rand() % LENGTH;
    }    
    if(pos >= NUM_OF_IRSENSOR) {
        pos = NUM_OF_IRSENSOR-1;
    }   
    

    for(int i = pos; i < pos + amt && i < NUM_OF_IRSENSOR; ++i){
        sensorArray[i] += rand() % 10 + THRESHOLD;
    }
}

void print_sensorArray(){
    for(int i = 0 ; i < NUM_OF_IRSENSOR; ++i){
        printf("%3d\t", sensorArray[i]);
    }
    printf("\n");
}

void print_Thresholded_values() {
    for(int i = 0 ; i < NUM_OF_IRSENSOR; ++i){
        printf("%3c\t", sensorArray[i] >= THRESHOLD ? '#' : ' ');
    }
    printf("\n");
}
