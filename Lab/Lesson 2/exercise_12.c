#include <stdio.h>

int main()
{
    double beg;
    double end;
    double delta;
    double m;
    double a;
    double b;

    scanf("%lf", &beg);
    scanf("%lf", &end);
    scanf("%lf", &delta);
    scanf("%lf", &m);
    scanf("%lf", &a);
    scanf("%lf", &b);

    if (beg > end)
    {
        printf("Enter new beg:");
        scanf("%lf", &beg);
        printf("Enter new end:");
        scanf("%lf", &end);
    }

    if (m > end || m < beg)
    {
        printf("Enter new m:");
        scanf("%lf", &m);
    }

    for (double x = beg; x < end; x += delta)
    {
        if (x <= m)
        {
            printf("%.2lf\n", b + x);
        }
        else
        {
            printf("%.2lf\n", a * x / (4 - x));
        }
    }

    return 0;
}