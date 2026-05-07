#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int i;
    int even_count = 0;
    int current_even_index = 0;
    int *input_arr;
    int *even_arr;

    printf("Въведете брой елементи (n): ");
    scanf("%d", &n);
    input_arr = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &input_arr[i]);
        if (input_arr[i] % 2 == 0) {
            even_count++;
        }
    }

    even_arr = malloc(even_count * sizeof(int));

    for (i = 0; i < n; i++) {
        if (input_arr[i] % 2 == 0) {
            even_arr[current_even_index] = input_arr[i];
            current_even_index++;
        }
    }

    for (i = 0; i < even_count; i++) {
        printf("%d ", even_arr[i]);
    }

    free(input_arr);
    free(even_arr);
    return 0;
}