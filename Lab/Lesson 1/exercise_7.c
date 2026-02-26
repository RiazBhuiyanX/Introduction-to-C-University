#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    double b;
    float c;
    char d;

    printf("Int: %d bytes\n", sizeof(a));
    printf("Double: %d bytes\n", sizeof(b));
    printf("Float: %d bytes\n", sizeof(c));
    printf("Char: %d bytes\n", sizeof(d));

    return 0;
}