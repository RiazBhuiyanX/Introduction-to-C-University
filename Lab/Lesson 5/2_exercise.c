#include <stdio.h>
#include <stdbool.h>

int main()
{
    int N;
    printf("Enter the size of the matrix: ");
    scanf("%d", &N);

    int matrix[N][N];
    printf("Enter the elements of the matrix:\n");
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("The matrix is:\n");
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    int targetSum = 0;
    for (int i = 0; i < N; i++)
    {
        targetSum += matrix[i][i];
    }

    bool isMagic = true;

    int secondaryDiagSum = 0;
    for (int i = 0; i < N; i++)
    {
        secondaryDiagSum += matrix[i][N - 1 - i];
    }
    if (secondaryDiagSum != targetSum)
        isMagic = false;

    for (int i = 0; i < N && isMagic; i++)
    {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < N; j++)
        {
            rowSum += matrix[i][j];
            colSum += matrix[j][i];
        }
        if (rowSum != targetSum || colSum != targetSum)
        {
            isMagic = false;
        }
    }

    if (isMagic)
    {
        printf("Магически е!");
    }
    else
    {
        printf("Не е магически!\n");
    }

    return 0;
}