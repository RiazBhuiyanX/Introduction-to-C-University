#include <stdio.h>

int main()
{

    // double a;
    // double b;

    // scanf("%lf", &a);
    // scanf("%lf", &b);

    int arr[5], i;

    printf("Size of integer in this compiler is %lu\n", sizeof(int));

    for (i = 0; i < 5; i++)
    {
        printf("Address arr[%d] is %p\n", i, &arr[i]);
    }
}