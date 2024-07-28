/*
Write a program that takes a number from the user and get the sum of the digits present in the number
For example :-
   Input: 1234
   Output: 10
*/
#include <stdio.h>
#include <stdlib.h> // For abs() function

int main()
{
    int number, digit, sum = 0;

    // Asking for input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle negative numbers
    number = abs(number);

    // Calculate the sum of the digits
    while (number > 0)
    {
        digit = number % 10; // Extract the last digit
        sum += digit;        // Add it to the sum
        number /= 10;        // Remove the last digit
    }

    // Output the result
    printf("%d\n", sum);

    return 0;
}
