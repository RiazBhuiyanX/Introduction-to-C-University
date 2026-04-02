#include <stdio.h>

int main()
{
    int a, b;
    printf("Въведете множител и брой числа: ");
    scanf("%d %d", &a, &b);

    int arr[b];
    for (int i = 1; i <= b; i++)
    {
        arr[i] = a * i;
    }

    for (int i = 1; i <= b; i++)
    {
        printf("%d ", arr[i]);
    }
}