
#include <stdio.h>

int main() {
    int number; // Variable to store user input
    int sum = 0; // Variable to store the sum of the integers

    printf("Enter integers to sum. Enter 0 to display the sum and exit.\n");

    // Loop to read integers until 0 is entered
    while (1) {
        printf("Enter an integer: ");
        
        if (scanf("%d", &number) != 1) {
            // Handle invalid input
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // Clear the input buffer
        } else if (number == 0) {
            // If input is 0, break out of the loop
            break;
        } else {
            // Add the valid integer to the sum
            sum += number;
        }
    }

    // Output the total sum
    printf("The sum of the entered integers is: %d\n", sum);

    return 0;
}

