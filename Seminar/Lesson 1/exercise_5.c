#include <stdio.h>

int main()
{
    double lev;
    printf("Levs: ");
    scanf("%lf", &lev);

    double usd = lev / 1.8;
    double euro = lev / 1.95583;
    double gbp = lev / 2.25;
    printf("%.2f USD, %.2f EUR, %.2f GBP\n", usd, euro, gbp);
}