// Write a C Program to implement  Using Recursive function (Factorial program)
#include <stdio.h>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case: factorial of 0 and 1 is 1
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}

int main() {
    int num;

    // Input the number from the user
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and display the factorial
        unsigned long long result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
