#include <stdio.h>
#include <stdbool.h>

int main()
{
    char str[] = "Hello World!";
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length of string: %d\n", len);

    int words = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
        {
            words++;
        }
    }
    printf("Number of words: %d\n", words);

    char c = 'l';
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("Letter %c appears %d times in the string\n", c, count);

    char str1[] = "Hello World!";
    char str2[] = "Hello World!";

    bool isProgrammingFun = true;
    for (int i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            isProgrammingFun = false;
            break;
        }
    }

    if (isProgrammingFun)
    {
        printf("They are equal!");
    }
    else
    {
        printf("They are not equal!");
    }
    return 0;
}