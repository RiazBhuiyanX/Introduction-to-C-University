#include <stdio.h>
#include <math.h>

double calculateCircleArea(double r)
{
    double PI = 3.14;
    double s = PI * pow(r, 2);
    return s;
}

double calculateCircleLength(double r)
{
    double PI = 3.14;
    double s = 2 * PI * r;
    return s;
}

int main()
{
    double radius;

    scanf("%lf", &radius);

    printf("Area of circle: %.2lf\n", calculateCircleArea(radius));
    printf("Length of circle: %.2lf\n", calculateCircleLength(radius));
    double x;
    scanf("%lf", &x);
    printf("%.2lf\n", calculateCircleArea(x));
    printf("%.2lf\n", calculateCircleLength(x));
}
