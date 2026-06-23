#ifndef SENSOR_H
#define SENSOR_H

#define MAX_SENSORS 5

typedef struct 
{
    char name[50];
    float value;
    float minLimit;
    float maxLimit;
} Sensor;

void loadDefaultSensors(Sensor sensors[]);
void displaySensors(Sensor sensors[]);
int checkAllSensors(Sensor senors[]);

#endif
