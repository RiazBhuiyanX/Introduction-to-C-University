#include <stdio.h>

int main()
{
    double a;
    double b;
    double c;

    printf("Enter a: ");
    scanf("%lf", &a);

    printf("Enter b: ");
    scanf("%lf", &b);

    printf("Enter c: ");
    scanf("%lf", &c);

    printf("Volume: %.2lf ", a * b * c);
    printf("Surface: %.2lf", 2 * (a * b + a * c + b * c));

    return 0;
}