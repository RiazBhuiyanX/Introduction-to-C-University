#include <stdio.h>

int main()
{
    int n, sum = 0, found = 0;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);

    int a[n], x;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Въведете число за проверка: ");
    scanf("%d", &x);

    int startIndex = 0, lengthArr = 1;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum == x)
            {
                printf("Намерен изход: ");
                for (int k = i; k <= j; k++){
                    printf("%d ", a[k]);
                }
                printf("\n");
                found = 1;
                break;
            }
        }
        if (found){
            break;
        }
    }
}
