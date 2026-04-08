#include <stdio.h>

int main() {
    int rows, cols;
    printf("Редове и колони: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int negArr[rows * cols];
    int negIdx = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Елемент[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            if (matrix[i][j] < 0){
                negArr[negIdx] = matrix[i][j];
                negIdx++;
            }
        }

    }

    printf("Новият масив е: ");
    for (int i = 0; i < negIdx ; i++){
        printf("%d ", negArr[i]);
    }

    return 0;
}