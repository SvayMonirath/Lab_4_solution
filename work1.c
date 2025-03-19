// 1. The original way to calculate square of a number n is to do the summation of the first n odd number. For examples:
// 5 = 1+3+5+7+9 = 25
// 4 = 1+3+5+7 = 16
// 3 = 1+3+5 =9
// 2 = 1+3 = 4
// 1 = 1 = 1
// Write a C program to ask a user for a number n and define the square of that number by using the proposed method.


#include<stdio.h>

int main(void) {
    // Declare variables
    int n, result = 0;
    
    // Ask the user for a number
    do {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while (n <= 0); // Ensure the number is positive

    int oddNumber = 1;// Initialize the first odd number
    
    // Print the sum of the first n odd numbers
    printf("The square of %d using the proposed method is:\n", n);
    for (int i = 0; i < n; i++) {
        result += oddNumber;    // Add the current odd number to result
        printf("%d", oddNumber);  // Print the odd number
        if (i < n - 1) {
            printf(" + ");  // Add "+" if it's not the last odd number
        }
        oddNumber += 2;         // Get the next odd number
    }

    // Print the result
    printf(" = %d\n", result);

    return 0; // Code success
}
