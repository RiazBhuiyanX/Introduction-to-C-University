#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool isRelation = true;
    printf("Задача 2: Въведете брой елементи: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 == 0)
        {
            if (!(a[i] < a[i + 1]))
            {
                isRelation = false;
            }
        }
        else
        {
            if (!(a[i] > a[i + 1]))
            {
                isRelation = false;
            }
        }
    }
    if (isRelation)
    {
        printf("Релацията е изпълнена.\n");
    }
    else
    {
        printf("Релацията НЕ е изпълнена.\n");
    }
}
