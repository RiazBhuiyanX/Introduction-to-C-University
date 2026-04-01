#include <stdio.h>

int main() {
    int N;
    printf("Enter the size of the matrix: ");
    scanf("%d", &N);

    int matrix[N][N];
    printf("Enter the elements of the matrix:\n");

    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            scanf("%d", &matrix[row][col]);
        }
    }

    printf("The matrix is:\n");
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    printf("Main dioganal elements are: ");
    for (int row = 0; row < N; row++) {
        printf("%d ", matrix[row][row]);
    }
    printf("\n");

    printf("Secondary dioganal elements are: ");
    for (int row = 0; row < N; row++) {
        printf("%d ", matrix[row][N - 1 - row]);
    }
    printf("\n");

    printf("Elements over main diagonal are: ");
    for (int row = 0; row < N - 1; row++) {
        for (int col = row + 1; col < N; col++) {
            printf("%d ", matrix[row][col]);
        }
    }
    printf("\n");

    printf("Elements under main diagonal are: ");
    for (int row = 1; row < N; row++) {
        for (int col = 0; col < row; col++) {
            printf("%d ", matrix[row][col]);
        }
    }
    printf("\n");

    return 0;
}