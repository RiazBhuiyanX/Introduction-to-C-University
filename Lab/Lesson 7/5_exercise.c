#include <stdio.h>

int main() {
    int rows, cols;
    printf("Редове и колони: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    double sum_nums = 0;
    int count_nums = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("Елемент[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);

            int sumIdx = i + j;

            if (sumIdx > 0 && matrix[i][j] % sumIdx == 0){
                sum_nums += matrix[i][j];
                count_nums++;
            }
        }

    }


    if (count_nums > 0){
        printf("Средно аритметично: %.2f\n", sum_nums/count_nums);
    } else {
        printf("Няма такива числа!");
    }

    return 0;
}
