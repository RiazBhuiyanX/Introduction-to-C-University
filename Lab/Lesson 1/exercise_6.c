#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    int c;

    printf("Enter integer 1: ");
    scanf("%d", &a);

    printf("Enter integer 2: ");
    scanf("%d", &b);

    printf("Enter integer 3: ");
    scanf("%d", &c);

    int y = 4 * a + 5 * pow((b+4*c), 2);
    printf("Aswer: %d\n", y);

    return 0;
}