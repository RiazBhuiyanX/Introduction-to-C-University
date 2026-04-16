#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    printf("Zad 1: Vyvedete N i M: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Елемент[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    bool rowsOk = true;
    bool colsOk = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m - 1; j++) {
            if (arr[i][j] >= arr[i][j+1]) {
                rowsOk = false;
            }
        }
    }


    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i][j] <= arr[i+1][j]) {
                colsOk = false;
            }
        }
    }

    printf("Redove narastvashti: ");
    if (rowsOk == true) {
        printf("Da\n");
    } else {
        printf("Ne\n");
    }

    printf("Koloni namalyavashti: ");
    if (colsOk == true) {
        printf("Da\n");
    } else {
        printf("Ne\n");
    }

    return 0;
}