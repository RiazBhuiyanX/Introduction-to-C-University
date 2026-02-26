#include <stdio.h>

int main()
{
    double d;

    printf("Enter diameter: ");
    scanf("%lf", &d);

    float pi = 3.14;
    printf("Area: %.2lf\n", pi * d);

    return 0;
}