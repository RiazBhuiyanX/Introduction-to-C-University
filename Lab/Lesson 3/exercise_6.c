#include <stdio.h>

void squareArea(double a)
{
    printf("%.2lf", a * a);
}

void rectangleArea(double a, double b)
{
    printf("%.2lf", a * b);
}

void areaPravougulen(double a, double b)
{
    printf("%.2lf", (a * b) / 2);
}

void areaCircle(double r)
{
    printf("%.2lf", 3.14 * r * r);
}

int main()
{
    int n;
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Square");
        double a;
        scanf("%lf", &a);
        squareArea(a);
        break;
    case 2:
        printf("Rectangle\n");
        double a, b;
        scanf("%lf", &a);
        scanf("%lf", &b);
        rectangleArea(a, b);
        break;
    case 3:
        printf("Pravougulen triug\n");
        double a, b;
        scanf("%lf", &a);
        scanf("%lf", &b);
        areaPravougulen(a, b);
        break;
    case 4:
        printf("Okrujnost\n");
        double r;
        scanf("%lf", &r);
        areaCircle(r);
        break;
    default:
        printf("Invalid digit\n");
    }
    return 0;
}
