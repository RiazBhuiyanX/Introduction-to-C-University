#include <stdio.h>

int main()
{
    int n;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);

    if (n > 100)
    {
        printf("Елементите трябва да са между 1 и 100!");
        printf("Въведете брой елементи: ");
        scanf("%d", &n);
    }

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int maxIndex = 0, maxNum = a[0], minIndex = 0, minNum = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxNum)
        {
            maxNum = a[i];
            maxIndex = i;
        }

        if (a[i] < minNum)
        {
            minNum = a[i];
            minIndex = i;
        }
    }

    printf("Максимално число, индекс: %d %d, Минимално число, индекс: %d %d", maxNum, maxIndex, minNum, minIndex);

    return 0;
}