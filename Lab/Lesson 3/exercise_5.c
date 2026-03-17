#include <stdio.h>
#include <math.h>

// double sumPlus5(double);
double areaCylinder(double, double);
double areaParalel(double, double, double);

int main()
{
    double r, h, a, b, c;

    printf("Radius of cylinder: ");
    scanf("%lf", &r);

    printf("Height of cylinder: ");
    scanf("%lf", &h);

    printf("Enter all rectangular cuboid's sides: \n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    printf("Area of cylinder: %.2lf cubic cm\n", areaCylinder(r, h));
    printf("Area of rectangular cuboid: %.2lf cubic cm\n", areaParalel(a, b, c));
}

double areaCylinder(double r, double h)
{
    return 3.14 * pow(r, 2) * h;
}

double areaParalel(double a, double b, double c)
{
    return a * b * c;
}