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
    printf("Staring Rocket...\n");
    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("View Sensor Data.\n");
            break;
        case 2:
            printf("Run System.\n");
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