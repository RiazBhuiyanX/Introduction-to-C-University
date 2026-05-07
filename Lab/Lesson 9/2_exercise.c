#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int *arr;

    printf("Въведете n: ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Обърнат масив: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
