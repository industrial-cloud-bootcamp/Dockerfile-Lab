#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main() {
    int choice, num1, num2;
    int operation_count = 0; // Track number of operations

    while (operation_count < 5) {  // Limit to 5 operations
        // Display menu
        printf("\n--- Simple Calculator ---\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        // Wait for valid choice input
        if (scanf("%d", &choice) != 1) {
            // Clear buffer and continue if invalid input
            while(getchar() != '\n');
            printf("Invalid input! Please enter a valid choice.\n");
            continue;
        }

        // Exit if user chooses 5
        if (choice == 5) {
            printf("Exiting calculator...\n");
            break;
        }

        // Input two numbers
        printf("Enter first number: ");
        if (scanf("%d", &num1) != 1) {
            while(getchar() != '\n');
            printf("Invalid input! Please enter a valid number.\n");
            continue;
        }

        printf("Enter second number: ");
        if (scanf("%d", &num2) != 1) {
            while(getchar() != '\n');
            printf("Invalid input! Please enter a valid number.\n");
            continue;
        }

        // Perform the corresponding operation
        switch (choice) {
            case 1:
                add_numbers(num1, num2);
                break;
            case 2:
                subtract_numbers(num1, num2);
                break;
            case 3:
                multiply_numbers(num1, num2);
                break;
            case 4:
                if (num2 != 0) {
                    divide_numbers(num1, num2);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }

        operation_count++; // Increment operation counter
    }

    printf("The calculator has stopped after %d operations.\n", operation_count);
    return 0;
}

