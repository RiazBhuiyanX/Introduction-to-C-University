#include <stdio.h>

int main()
{
    char c;
    printf("Symbol: ");
    scanf(" %c", &c);
    printf("Previous: %c, Next: %c\n", c - 1, c + 1);
}