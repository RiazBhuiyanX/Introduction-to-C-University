#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int index_to_remove;
    int *arr;

    printf("Въведете брой елементи (n): ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Индекс за махане: ");
    scanf("%d", &index_to_remove);

    for (i = index_to_remove; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
    arr = realloc(arr, n * sizeof(int));

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}