#include <stdio.h>
#include <limits.h>

int main(){
    int n, m;
    printf("Zad 12: Vyvedete N i M: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Елемент[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    int minSum = INT_MAX; 
    int startRow = 0;
    int startCol = 0;
    for (int i = 0; i <= n - 3; i++) {
        for (int j = 0; j <= m - 3; j++) {
            int currentSum = 0;
            for (int r = i; r < i + 3; r++) {
                for (int c = j; c < j + 3; c++) {
                    currentSum = currentSum + arr[r][c];
                }
            }
            if (currentSum < minSum) {
                minSum = currentSum;
                startRow = i;
                startCol = j;
            }
        }
    }

    printf("Podmatrica s minimalna suma:\n");
    for (int i = startRow; i < startRow + 3; i++) {
        for (int j = startCol; j < startCol + 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}