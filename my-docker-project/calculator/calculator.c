#include <stdio.h>
#include "calculator.h"

// Function to add two numbers
void add_numbers(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

// Function to subtract two numbers
void subtract_numbers(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

// Function to multiply two numbers
void multiply_numbers(int a, int b) {
    printf("%d * %d = %d\n", a, b, a * b);
}

// Function to divide two numbers
void divide_numbers(int a, int b) {
    printf("%d / %d = %.2f\n", a, b, (float)a / b);
}

