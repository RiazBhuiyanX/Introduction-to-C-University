#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter integer: ");
    scanf("%d", &b);

    printf("Enter integer: ");
    scanf("%d", &c);

    if (a < b && a < c)
    {
        printf("%d", a);
    }
    else if (a < b && a > c)
    {

        printf("%d", c);
    }
    else if (a > b && a < c)
    {
        printf("%d", b);
    }

    return 0;
}