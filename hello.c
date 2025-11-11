#include <stdio.h>

#define MAX_PATIENTS 100  // Maximum number of records

// Define a structure to store patient details
struct Patient {
    char name[50];
    char date[15];
    char time[10];
    float celsius;
    float fahrenheit;
};

int main() {
    struct Patient patients[MAX_PATIENTS];
    int n, i;

    printf("==== PATIENT TEMPERATURE RECORD SYSTEM ====\n");

    printf("Enter number of patients: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for Patient %d ---\n", i + 1);
        
        printf("Enter patient name: ");
        scanf(" %[^\n]", patients[i].name);  // To read full name with spaces

        printf("Enter date (DD/MM/YYYY): ");
        scanf("%s", patients[i].date);

        printf("Enter time (HH:MM): ");
        scanf("%s", patients[i].time);

        printf("Enter temperature in Celsius: ");
        scanf("%f", &patients[i].celsius);

        // Convert to Fahrenheit
        patients[i].fahrenheit = (patients[i].celsius * 9 / 5) + 32;
    }

    // Display all records
    printf("\n\n======= PATIENT TEMPERATURE RECORDS =======\n");
    printf("%-20s %-12s %-8s %-12s %-12s\n", "Name", "Date", "Time", "Celsius", "Fahrenheit");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-20s %-12s %-8s %-12.2f %-12.2f\n",
               patients[i].name,
               patients[i].date,
               patients[i].time,
               patients[i].celsius,
               patients[i].fahrenheit);
    }

    printf("===========================================\n");

    return 0;
}