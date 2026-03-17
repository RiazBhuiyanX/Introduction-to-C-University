#include <stdio.h>

int main()
{
    int n;
    int k;

    printf("Enter integer N: ");
    scanf("%d", &n);

    printf("Enter integer K: ");
    scanf("%d", &k);

    int random;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &random);
        if (random > k && random % 3 == 0)
        {
            count++;
        }
    }

    printf("%d\n", count);
}