#include <stdio.h>
#include <string.h>
#include "../include/sensor.h"
#define MAX_SENSORS 5

void loadDefaulofSensors(Sensor sensors[]){
    strcpy(sensors[0].name, "Temperature");
    sensors[0].value = 75;
    sensors[0].minLimit = 0;
    sensors[0].maxLimit = 90;
    
    strcpy(sensors[1].name, "Pressure");
    sensors[1].value = 100;
    sensors[1].minLimit = 50;
    sensors[1].maxLimit = 120;

    strcpy(sensors[2].name, "Voltage");
    sensors[2].value = 12;
    sensors[2].minLimit = 11;
    sensors[2].maxLimit = 13;

    strcpy(sensors[3].name, "Speed");
    sensors[3].value = 700;
    sensors[3].minLimit = 0;
    sensors[3].maxLimit = 1000;

    strcpy(sensors[4].name, "Altitude");
    sensors[4].value = 5000;
    sensors[2].minLimit = 0;
    sensors[2].maxLimit = 10000;
}
void displaySensors(Sensor sensors[]){
    for (int i = 0; i < MAX_SENSORS; i++){
        printf("%s: %.2f | Limit: %.2f - %.2f\n", 
            sensors[i].name,
            sensors[i].value,
            sensors[i].minLimit,
            sensors[i].maxLimit);
    }
}

int checlAllSensors(Sensor sensors[]){
    int allPassed = 1;

    for (int i = 0; i < MAX_SENSORS; i++){
        if (sensors[i].value < sensors[i].minLimit || sensors[i].value > sensors[i].maxLimit) {
            printf("%s: FAIL\n", sensors[i].name);
            allPassed = 0;
        } else {
            printf("%s: PASS\n", sensors[i].name);
        }
    }
    return allPassed;
}