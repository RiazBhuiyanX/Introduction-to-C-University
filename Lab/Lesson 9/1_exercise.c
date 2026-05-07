#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int sum = 0;
    int *arr;

    printf("Въведете брой елементи (n): ");
    scanf("%d", &n);

    arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Грешка при заделяне на памет!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Въведете число %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Изход (сума): %d\n", sum);

    free(arr);
    return 0;
}