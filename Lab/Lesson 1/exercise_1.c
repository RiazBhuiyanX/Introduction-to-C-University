#include <stdio.h>

int main() {
    int a;
    double b;
    char myChar;

    printf("Enter integer: ");
    scanf("%d", &a);

    printf("Enter double: ");
    scanf("%lf", &b);

    printf("Enter char: ");
    scanf(" %c", &myChar);

    printf("Integer: %d\n", a);
    printf("Double: %lf\n", b);
    printf("Char: %c", myChar);

    return 0;
}