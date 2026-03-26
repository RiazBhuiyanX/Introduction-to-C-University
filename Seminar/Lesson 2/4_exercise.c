#include <stdio.h>

int main()
{
    int a;
    printf("Enter number: \n");
    scanf("%d", &a);

    double bonus_points = 0.0;

    if (a <= 100)
    {
        bonus_points += 5;
    }
    else if (a > 100 && a <= 1000)
    {
        bonus_points += 0.2 * a;
    }
    else
    {
        bonus_points += 0.1 * a;
    }

    if (a % 2 == 0)
    {
        bonus_points += 1;
    }

    if (a % 10 == 5)
    {
        bonus_points += 2;
    }

    printf("Bonus points: %.2lf\n", bonus_points);
    printf("All points: %.2lf\n", bonus_points + a);
}