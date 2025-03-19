// 2. Write a C program that displays the table of multiplication from 1 to n where n is a number entered by a user. The value of n should be from 1 to 9 only. Display the table in the form using the format in the example below:
#include<stdio.h>

int main(void) {
    int num; // Declare variable for input

    // Prompt user to enter a number between 1 and 9
    do {
        printf("Enter a number (1-9): ");
        scanf("%d", &num);
    } while (num < 1 || num > 9); // Ensure the input is between 1 and 9

    // Print the header row (1 to n)
    printf("\nMultiplication Table from 1 to %d:\n\n", num);

    // Print column headers (numbers 1 to n)
    for (int i = 1; i <= num; i++) {
        printf("\t%d", i);
    }  
    printf("\n\n");

    // Print the multiplication table
    for (int i = 1; i <= num; i++) {
        // Print the row number as a header
        printf("%d", i);

        // Print the multiplication values for this row
        for (int j = 1; j <= num; j++) {
            printf("\t%d", i * j);  // Multiply row and column number
        }
        printf("\n\n");
    }

    return 0;
}
