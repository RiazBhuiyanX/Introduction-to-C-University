#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int col_w = n / 2;
    int mid_w = 2 * n - 4 - 2 * col_w;

    printf("/");
    for (int i = 0; i < col_w; i++)
    {
        printf("^");
    }
    printf("\\");
    for (int i = 0; i < mid_w; i++)
    {
        printf("_");
    }
    printf("/");
    for (int i = 0; i < col_w; i++)
    {
        printf("^");
    }
    printf("\\\n");

    for (int i = 0; i < n - 3; i++)
    {
        printf("|");
        for (int j = 0; j < 2 * n - 2; j++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    if (n > 2)
    {
        printf("|");
        for (int i = 0; i < col_w + 1; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < mid_w; i++)
        {
            printf("_");
        }
        for (int i = 0; i < col_w + 1; i++)
        {
            printf(" ");
        }
        printf("|\n");
    }

    printf("\\");
    for (int i = 0; i < col_w; i++)
    {
        printf("_");
    }
    printf("/");
    for (int i = 0; i < mid_w; i++)
    {
        printf(" ");
    }
    printf("\\");
    for (int i = 0; i < col_w; i++)
    {
        printf("_");
    }
    printf("/\n");
}
