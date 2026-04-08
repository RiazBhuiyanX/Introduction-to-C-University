#include <stdio.h>

// Task 2: Program that finds the number of words in a string
int main()
{
    char str[100];
    int i, words = 0, in_word = 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && in_word == 0)
        {
            words++;
            in_word = 1;
        }
        if (str[i] == ' ')
        {
            in_word = 0;
        }
    }

    printf("Number of words: %d\n", words);

    return 0;
}
