#include <stdio.h>

int main()
{
    double deg;
    printf("Degrees: ");
    scanf("%lf", &deg);
    printf("%.4f rad\n", deg * 3.14 / 180);
}