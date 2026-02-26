#include <stdio.h>

int main()
{
    double d;

    printf("Enter double: ");
    scanf("%lf", &d);

    float pi = 3.14;
    printf("Area: %.2lf\n", pi * d);

    return 0;
}