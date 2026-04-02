#include <stdio.h>

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

int main()
{
    int n;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    bubbleSort(a, n);
    printf("Масив след сортиране: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    int start = 0, maxStart = 0, currentLen = 1, maxLen = 1;
    for (int i = 1; i < n; i++)
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
}