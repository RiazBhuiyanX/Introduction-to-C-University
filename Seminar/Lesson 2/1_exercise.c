#include <stdio.h>

void biggerNum(int a, int b)
{
    if (a >= b)
    {
        printf("Bigger: %d\n", a);
    }
    else
    {
        printf("Bigger: %d\n", b);
    }
}

void smallerNum(int a, int b)
{
    if (a <= b)
    {
        printf("Smaller: %d\n", a);
    }
    else
    {
        printf("Smaller: %d\n", b);
    }
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    while (a != 0 && b != 0)
    {
        biggerNum(a, b);
        smallerNum(a, b);

        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
    }

    return 0;
}
