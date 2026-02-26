#include <stdio.h>

int main()
{
    int a;
    int b;

    printf("Enter integer 1: ");
    scanf("%d", &a);

    printf("Enter integer 2: ");
    scanf("%d", &b);

    printf("Integer 1: %d\n", a);
    printf("Integer 2: %d\n", b);
    printf("Sum: %d\n", a + b);
    printf("Multiply: %d\n", a * b);
    printf("Remainder: %d\n", a % b);

    a -= b;
    printf("After a-=b: %d\n", a);

    a /= b;
    printf("After a/=b: %d\n", a);

    a ^= b;
    printf("After a^=b: %d\n", a);

    printf("++: %d\n", b++);
    printf("--: %d\n", b--);

    return 0;
}