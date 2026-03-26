#include <stdio.h>

int main()
{
    double arr[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\narr[%d] -> ", i);
        scanf("%lf", &arr[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%.2lf\n", arr[j]);
    }

    return 0;
}