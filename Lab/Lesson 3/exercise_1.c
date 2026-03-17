#include <stdio.h>

double calculateSum(double x, double y)
{
    double sum = x + y;
    return sum;
}

int main()
{
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    printf("%.2lf", calculateSum(x, y));
}
