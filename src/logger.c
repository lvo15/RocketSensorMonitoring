#include <stdio.h>
#include "../include/logger.h"
#include "../include/sensor.h"

void saveReport (Sensor sensors[]){
    FILE *file = fopen("sensor_report.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(file, "Sensor Report\n");
    fprintf(file, "==============\n");
    for (int i = 0; i < MAX_SENSORS; i++){
        fprintf(file, "%s: %.2f | Limit: %.2f - %.2f\n", 
            sensors[i].name,
            sensors[i].value,
            sensors[i].minLimit,
            sensors[i].maxLimit);
    }
    fclose(file);
    printf("Report saved to sensor_report.txt\n");
}