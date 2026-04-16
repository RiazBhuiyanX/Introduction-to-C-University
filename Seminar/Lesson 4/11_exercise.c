#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    printf("Zad 11: n: ");
    scanf("%d", &n);

    int a[n][n];
    int b[n][n];
    bool hasNegative = false;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("Елемент[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
            b[i][j] = 0;
            if (i == n - 1) {
                if (a[i][j] < 0) {
                    hasNegative = true;
                }
            }
        }
    }


    if (hasNegative == true) {
        for (int i = 0; i < n; i++) {
            b[i][i] = 1;
        }
    } else {
        for (int i = 0; i < n; i++) {
            b[i][n - 1 - i] = -1;
        }
    }

    printf("Matrica B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}