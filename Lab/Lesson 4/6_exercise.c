#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[7];

    for (int i = 0; i < 7; i++)
    {
        while (arr[i] < -200 || arr[i] > 200)
        {
            printf("arr[%d] -> ", i);
            scanf("%d", &arr[i]);
        }
    }

    int sum = 0;
    for (int j = 0; j < 7; j++)
    {
        sum += arr[j];
    }

    printf("Sum is: %d\n", sum);

    int max = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Max is: %d\n", max);

    float average = 0;
    for (int i = 0; i < 7; i++)
    {
        average += arr[i];
    }
    average /= 7;
    printf("Average is: %.2f\n", average);

    float closest = arr[0];
    for (int i = 1; i < 7; i++)
    {
        if (abs(arr[i] - average) < abs(closest - average))
        {
            closest = arr[i];
        }
    }
    printf("Closest to average is: %.2f\n", closest);

    return 0;
}