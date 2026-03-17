#include <stdio.h>

void multiply(int, int, double);

int main()
{
    int x = 2, y = 3;
    double z = 2.2;
    multiply(x, y, z);
    return 0;
}

void multiply(int x, int y, double z)
{
    printf("%.2lf", x * y * z);
}