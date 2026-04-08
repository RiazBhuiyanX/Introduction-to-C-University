#include <stdio.h>

// Task 5: Function that returns the number of vowels in a string
int count_vowels(char str[])
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        char c = str[i];
        if (c >= 'A' && c <= 'Z')
        {
            c = c + 32; // convert to lowercase
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Number of vowels: %d\n", count_vowels(str));

    return 0;
}
