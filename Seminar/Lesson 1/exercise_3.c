#include <stdio.h>

int main()
{
    double c;
    printf("Degrees in Celsius: ");
    scanf("%lf", &c);
    printf("%.2lf F\n", c * 1.8 + 32);
}