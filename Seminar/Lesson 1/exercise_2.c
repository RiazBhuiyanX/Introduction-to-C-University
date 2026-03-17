#include <stdio.h>

int main()
{
    double inch;
    printf("Inches: ");
    scanf("%lf", &inch);
    double mm = inch * 25.4;
    double cm = mm / 10;
    double dm = mm / 100;
    double m = mm / 1000;
    printf("%.2lf mm, %.2lf cm, %.2lf dm, %.2lf m\n", mm, cm, dm, m);
}