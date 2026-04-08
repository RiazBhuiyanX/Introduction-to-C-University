#include <stdio.h>

// Task 4: Program that compares two strings without built-in functions
int my_strcmp(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

int main()
{
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    int result = my_strcmp(str1, str2);

    if (result == 0)
    {
        printf("The strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("First string is smaller.\n");
    }
    else
    {
        printf("First string is bigger.\n");
    }

    return 0;
}
