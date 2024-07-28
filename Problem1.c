/*
Write a program which takes a number from user and print all odd numbers in between 2 and N, but print 2 first
Note --: You have to complete print_Odd
For example -:
   Input: 10
   Output: 2
   3
   5
   7
   9
*/
#include <stdio.h>

int main()
{
    int N, i;

    // Prompting user to enter the value of N
    printf("Enter a number: ");
    scanf("%d", &N);

    // Printing 2 first
    printf("2\n");

    // Checking for odd numbers between 2 and N
    for (i = 3; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
