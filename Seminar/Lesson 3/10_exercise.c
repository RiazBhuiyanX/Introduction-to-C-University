#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);

    int a[n], x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Число за търсене: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            count++;
        }
    }

    printf("Брой срещания: %d", count);
}