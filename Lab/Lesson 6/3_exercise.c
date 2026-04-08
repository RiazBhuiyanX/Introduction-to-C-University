#include <stdio.h>

// Task 3: Program that counts how many times each letter appears
int main()
{
    char str[100];
    int count[26] = {0};
    int i;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            count[str[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("'%c' -> %d times\n", 'a' + i, count[i]);
        }
    }

    return 0;
}
