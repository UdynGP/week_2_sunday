/*
You are provided an array of integers and you have to increment all array elements by 1 and then print whole array.
For example -:
   Input: 12345
   Output: 23456
*/
#include <stdio.h>

int main()
{
    int n, i;

    // Ask for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare an array of size n

    // Input elements of the array
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Increment each element by 1
    for (i = 0; i < n; i++)
    {
        arr[i] += 1;
    }

    // Output the updated array
    printf("Updated array:- ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
