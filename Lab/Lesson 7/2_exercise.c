#include <stdio.h>

int main() {
    int n;
    printf("Въведете брой елементи: ");
    scanf("%d", &n);

    int arr[n];
    int sums_arr[n];

    for (int i = 0; i < n; i++){
        printf("Въведете 4-цифрено число на позиция arr[%d]: ", i);
        scanf("%d", &arr[i]);
        while (arr[i] < 1000 || arr[i] > 9999){
            printf("Въведете 4-цифрено число на позиция arr[%d]: ", i);
            scanf("%d", &arr[i]);
        }

        int curr_num = arr[i];
        int sum = 0;
        while (curr_num > 0){
            sum += curr_num % 10;
            curr_num /= 10;
        }

        sums_arr[i] = sum;
    }

    printf("Новият масив е: ");
    for (int i = 0; i < n; i++){
        printf("%d ", sums_arr[i]);
    }

    return 0;
}