/*
Write a program where you are given strings and your task is to concatenate them and return the concatenated string
Note :-- You have to complete joinStrings function
For example -:
   Input:  Hackingly technologies
   Output: Hackinglytechnologies
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char *joinStrings(const char *input);

int main()
{
    char input[200]; // Buffer for the entire input line
    char *result;

    // Input the line containing two strings separated by a whitespace
    printf("Enter two strings:- ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline character if present

    // Join strings
    result = joinStrings(input);

    // Print the joined string
    printf("%s\n", result);

    // Free the dynamically allocated memory
    free(result);

    return 0;
}

// Function to join two strings from a single input line
char *joinStrings(const char *input)
{
    int i, length = strlen(input);
    char *result = malloc(length + 1); // +1 for the null terminator
    if (result == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }

    int j = 0; // Index for result
    for (i = 0; i < length; i++)
    {
        if (input[i] != ' ')
        { // Skip whitespace
            result[j++] = input[i];
        }
    }
    result[j] = '\0'; // Terminate the string properly

    return result;
}
