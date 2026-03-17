#include <stdio.h>

int main()
{
    double w, h;
    printf("Width and height (m): ");
    scanf("%lf %lf", &w, &h);
    int rows = (w * 100) / 120;
    int cols = (h * 100 - 100) / 70;
    printf("Working seats: %d\n", (rows * cols) - 3);
}