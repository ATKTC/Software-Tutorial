/* homework-1.c */
#include "IRSensor.h"

int main() {
    while(1){
        printf("\n\nRead from IR Sensor\n");
        readIRSensor();
        print_sensorArray();
        print_Thresholded_values();
        // _sleep(1000);
    }
}
