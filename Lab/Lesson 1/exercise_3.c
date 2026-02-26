#include <stdio.h>

int main() {
    double a;
    double b;

    printf("Enter double 1: ");
    scanf("%lf", &a);

    printf("Enter double 2: ");
    scanf("%lf", &b);

    printf("Area: %.2lf\n", a*b);

    return 0;
}