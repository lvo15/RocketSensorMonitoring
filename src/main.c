#include <stdio.h>
#include "../include/sensor.h"
#include "../include/logger.h"

void displayMenu() {
    printf ("\n====== Rocket Sensor System =====\n");
    printf ("1. View Sensor Data\n");
    printf ("2. Run System Diagnostics\n");
    printf ("3. Save\n");
    printf ("4. Exit\n");
}
int main(){
    int choice;
    Sensor sensors [MAX_SENSORS];
    printf("Staring Rocket...\n");
    loadDefaultSensors(sensors);
    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            displaySensors(sensors);
            break;
        case 2:
            int result = checkAllSensors(sensors);

            if (result)
                printf ("Overrall System: Pass\n");
            else
                printf ("Overall Systam: Fail\n");
            break;
        case 3:
            printf("Save Report System.\n");
            break;
        case 4:
            printf("Exit System.\n");
            break;        
        default:
            printf("Invalid option. Please try again.\n");
        }
    }while (choice !=4);

    return 0;
}