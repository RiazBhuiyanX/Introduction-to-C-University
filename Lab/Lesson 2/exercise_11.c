#include <stdio.h>

int main()
{
    double a;
    double b;

    scanf("%lf", &a);
    scanf("%lf", &b);

    for (double i = a; i < b; i += 0.01)
    {
        printf("%.2lf\n", i * i - 4);
    }

    return 0;
}