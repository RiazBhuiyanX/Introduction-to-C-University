#include <stdio.h>

int main()
{
    char s;
    printf("Enter symbol: ");
    scanf(" %c", &s);
    printf("----------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%c        %c\n", s, s);
    }
    printf("----------\n");
}