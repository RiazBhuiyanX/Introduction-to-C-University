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

    int count = 0;
    for (int i = 0; i < n; i++){
        if ( i % 2 != 0 && arr[i] % 2 == 0){
            count++;
        }
    }

    printf("Брой четни числа на нечетни позиции: %d", count);

    return 0;
}