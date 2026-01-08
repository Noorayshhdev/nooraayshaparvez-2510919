#include <stdio.h>

/*
    Function Name: calculateDigitalRoot
    Purpose      : Calculates the digital root of a number
    Parameter    : Integer number
    Return Type  : Integer (single digit digital root)
*/
int calculateDigitalRoot(int num) {
    int sum;

    while (num > 9) {
        sum = 0;

        while (num > 0) {
            sum += num % 10;  // Extract last digit
            num /= 10;        // Remove last digit
        }

        num = sum; // Assign sum for next iteration
    }

    return num;
}

int main() {
    int number, digitalRoot;

    printf("Enter a number: ");
    scanf("%d", &number);

    digitalRoot = calculateDigitalRoot(number);

    printf("Digital Root of %d is: %d\n", number, digitalRoot);

    return 0;
}
