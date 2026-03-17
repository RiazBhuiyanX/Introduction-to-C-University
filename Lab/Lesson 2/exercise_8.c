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
    int multiply = 1;
    for (int i = a + 1; i < b; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            multiply *= i;
        }
    }

    printf("%d\n", sum);
    printf("%d\n", multiply);
}