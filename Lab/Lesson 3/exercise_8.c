#include <stdio.h>

void change(int x, int y)
{
    int c;
    printf("x: %d\n", x);
    printf("y: %d\n", y);

    c = x;
    x = y;
    y = c;
    printf("x: %d\n", x);
    printf("y: %d\n", y);
}

int main()
{
    change(2, 3);
}
