/* IRSensor.h */
#include <stdio.h>
#include <stdlib.h>

#ifndef __IRSENSOR_H__
#define __IRSENSOR_H__

// Macros
#define NUM_OF_IRSENSOR 9
#define LENGTH 3
#define THRESHOLD 150

// Functions
#define resetIRArray() memset(sensorArray, 0);
void readIRSensor();
void print_sensorArray();
void print_Thresholded_values();
#endif