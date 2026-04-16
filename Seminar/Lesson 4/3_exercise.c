#include <stdio.h>
#include <limits.h>

int main() {
    int n, m;
    printf("Zad 3: Vyvedete N i M: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Елемент[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);

            if (arr[i][j] > maxValue) {
                maxValue = arr[i][j];
                maxIndex = i;
            }
            
            if (arr[i][j] < minValue) {
                minValue = arr[i][j];
                minIndex = i;
            }
        }
    }


    for (int j = 0; j < m; j++) {
        int temp = arr[maxIndex][j];
        arr[maxIndex][j] = arr[minIndex][j];
        arr[minIndex][j] = temp;
    }

    printf("Matricata sled razmyana:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}