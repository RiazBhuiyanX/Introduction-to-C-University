#include <stdio.h>

void checkIfEven(int x)
{
    if (x % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}

int main()
{
    checkIfEven(2);
}
