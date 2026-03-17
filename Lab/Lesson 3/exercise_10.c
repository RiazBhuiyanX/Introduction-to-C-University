#include <stdio.h>

int sum(int x, int y, int z)
{
    return x + y + z;
}

int biggest(int x, int y, int z)
{
    int biggest;
    if (x >= y)
    {
        biggest = x;
    }
    else
    {
        biggest = y;
    }

    if (biggest <= y)
    {
        biggest = y;
    }

    return biggest;
}

int smallest(int x, int y, int z)
{
    int smallest;
    if (x >= y)
    {
        smallest = y;
    }
    else
    {
        smallest = x;
    }

    if (smallest <= y)
    {
        smallest = y;
    }

    return smallest;
}

double average(int x, int y, int z)
{
    return (x + y + z) / 3;
}

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    sum(a, b, c);
    biggest(a, b, c);
    smallest(a, b, c);
    average(a, b, c);
}
