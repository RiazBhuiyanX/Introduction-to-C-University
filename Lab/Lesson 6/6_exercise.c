#include <stdio.h>

// Task 6: Program that replaces lowercase letters with uppercase
int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32; // към ъпъркейс
        }
    }

    printf("Uppercase: %s\n", str);

    return 0;
}
