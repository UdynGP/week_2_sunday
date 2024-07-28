/*
Write a program where you are given two strings S1 and S2. You need to return a string which is the concatenation of both the given  strings.
Note: You have to complete Concatenate_Strings function.
For example -:
   Input:  Hack
               ingly
   Output: Hackingly
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char *Concatenate_Strings(const char *s1, const char *s2);

int main()
{
    char s1[100], s2[100];
    char *result;

    // Input the first string
    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0; // Remove newline character if present

    // Input the second string
    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; // Remove newline character if present

    // Concatenate strings
    result = Concatenate_Strings(s1, s2);

    // Print the concatenated string
    printf("%s\n", result);

    // Free the dynamically allocated memory
    free(result);

    return 0;
}

// Function to concatenate two strings
char *Concatenate_Strings(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // Allocate memory for the result
    if (result == NULL)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        exit(1);
    }
    strcpy(result, s1); // Copy the first string into result
    strcat(result, s2); // Concatenate the second string onto result
    return result;
}
