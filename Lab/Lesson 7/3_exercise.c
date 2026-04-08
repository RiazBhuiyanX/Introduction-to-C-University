#include <stdio.h>

int main() {
    int n;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++){
        printf("Въведете число на позиция arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    printf("Новият стар масив е: ");
    for (int i = 0; i < newSize; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}