#include <stdio.h>

int main()
{
    int a;
    int sum = 0;

    scanf("%d", &a);

    while (a != 0)
    {
        sum += a;
        scanf("%d", &a);
    }

    printf("%d", sum);
}