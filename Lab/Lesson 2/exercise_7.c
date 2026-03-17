#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter integer: ");
    scanf("%d", &b);

    int sum = 0;
    for (int i = a + 1; i < b; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);
}