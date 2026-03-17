#include <stdio.h>

void max(int, int);

int main()
{
    int x = 2, y = 3;
    max(x, y);
    return 0;
}

void max(int x, int y)
{
    if (x > y)
    {
        printf("%d", x);
    }
    else
    {
        printf("%d", y);
    }
}