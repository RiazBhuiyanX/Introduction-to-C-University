#include <stdio.h>
#include <math.h>

void decimalToBinary(int n)
{
    int position = 0;
    int binary = 0;

    while (n != 0)
    {
        binary += (n % 2) * pow(10, position);
        position += 1;
        n /= 2;
    }

    printf("%d", binary);
}

int main()
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);

    decimalToBinary(n);
}
