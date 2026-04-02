#include <stdio.h>

int main()
{
    int n, i;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int start = 0, maxStart = 0, currentLen = 1, maxLen = 1;
    for (i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1])
        {
            currentLen++;
        }
        else
        {
            if (currentLen > maxLen)
            {
                maxLen = currentLen;
                maxStart = start;
            }
            start = i;
            currentLen = 1;
        }
    }

    if (currentLen > maxLen)
    {
        maxLen = currentLen;
        maxStart = start;
    }

    printf("\nНачало (индекс): %d, Дължина: %d\n", maxStart, maxLen);

    for (int i = maxStart; i < maxStart + maxLen; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}