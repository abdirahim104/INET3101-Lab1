#MyLab1
/**
 * @file myLab1.c
 * @author Abdirahim Abdullahi
 * @date 2/11/2025
 * @brief Database Interface Program - Lab 1 Implementation
 * 
 * This program implements a menu-driven interface for a simple database system
 * using core C programming concepts. It demonstrates file I/O, command-line arguments,
 * and basic data management while following an iterative development approach.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 
// Function declarations
void PrintAllRecords();
void AddRecord();
void DeleteRecord();
void PrintNumRecords();
void PrintDatabaseSize();
void PrintNumChanges(bool print);

static int changes = 0; // keeps track of changes made
char databaseName[50]; // stores name of database

int main(int argc, char *argv[]) {
    int choice; // variable that stores user's menu choice

    if (argc < 2) { // check if name is given as command line arg
        printf("Error: A database name is required to continue.\n"); // error message if database name isn't given
        return 1;  // exits program with error code
    }

    snprintf(databaseName, sizeof(databaseName), "%s", argv[1]);
// Menu options for the user
    while (1) {
        printf("\nMenu for database: %s\n", databaseName);
        printf("1) Print all records\n");
        printf("2) Add record\n");
        printf("3) Delete the last record\n");
        printf("4) Print number of records\n");
        printf("5) Print database size\n");
        printf("6) Print number of changes\n");
        printf("7) Exit\n");
        printf("Please enter your selection > ");
        // check if input is a valid int
        if (scanf("%d", &choice) != 1) {  
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n');
            continue;  
        }
// switch statements for menu options
        switch (choice) {
            case 1:
                PrintAllRecords();
                break;
            case 2:
                AddRecord();
                break;
            case 3:
                DeleteRecord();
                break;
            case 4:
                PrintNumRecords();
                break;
            case 5:
                PrintDatabaseSize();
                break;
            case 6:
                PrintNumChanges(true);
                break;
            case 7:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid selection. Please try again.\n"); // handles invalid inputs
                break;
        }
    }
    return 0;
}

// print all records function
void PrintAllRecords() {
    printf("You have entered the Print all records function for database: %s\n", databaseName);
}
// variables that hold details of parts
void AddRecord() {
    // displays details for each variable
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;
// prompt user for part number
    printf("Enter part number: ");
    scanf("%d", &partNumber);

    printf("Enter part name: ");
    scanf(" %[^\n]", partName);
    
    printf("Enter part size: ");
    scanf("%f", &partSize);
    
    printf("Enter part size metric: ");
    scanf("%s", partSizeMetric);
    
    printf("Enter part cost: ");
    scanf("%f", &partCost);

    printf("You entered\n");
    printf("Part number = %d\n", partNumber);
    printf("Part name = \"%s\"\n", partName);
    printf("Part size = %.2f\n", partSize);
    printf("Part size metric = \"%s\"\n", partSizeMetric);
    printf("Part cost = $%.2f\n", partCost);
    PrintNumChanges(false); // updates and prints num of changes made to database
}
// deleteRecord function
void DeleteRecord() {
    printf("You have entered the delete last record function for database: %s\n", databaseName);
}
//PrintNumRecord function
void PrintNumRecords() {
    printf("You have entered the Print number of records function for database: %s\n", databaseName);
}
// PrintDatabaseSize function
void PrintDatabaseSize() {
    printf("You have entered the Print database size function for database: %s\n", databaseName);
}

void PrintNumChanges(bool print) {
    // if true, show amount of changes made to database
    if (print) {
        printf("You have modified the database %d times\n", changes);
    } else {
        // increment changes and print current number of changes
        changes++;
        printf("%d modifications so far\n", changes);
    }
}
