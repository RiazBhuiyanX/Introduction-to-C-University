#include <stdio.h>

int main()
{
    int a;

    printf("Enter integer: ");
    scanf("%d", &a);

    if (a % 8 == 4)
    {
        printf("Hooray!");
    }
    else
    {
        printf("Yes wee!");
    }

    return 0;
}