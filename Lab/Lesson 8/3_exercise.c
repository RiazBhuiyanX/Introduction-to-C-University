#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    FILE *f_bin; 
    f_bin = fopen("numbers.bin", "wb");

    int temp;
    printf("Въвеждайте числа (въведете буква или символ за край):\n");
    while (scanf("%d", &temp) == 1) {
        fwrite(&temp, sizeof(int), 1, f_bin);
    }
    fclose(f_bin);

    f_bin = fopen("numbers.bin", "rb");

    int num;
    int even_digits = 0;
    int odd_digits = 0;
    int count_elements = 0;
    while (fread(&num, sizeof(int), 1, f_bin) == 1) {
        count_elements++;
        int temp_num = abs(num);
        if (temp_num == 0){
            even_digits++;
        }
        
        while (temp_num > 0) {
            int digit = temp_num % 10;
            if (digit % 2 == 0){
                even_digits++;
            } else {    
                odd_digits++;
            }
            temp_num /= 10;
        }
    }
    
    printf("\nБрой четни цифри: %d", even_digits);
    printf("\nБрой нечетни цифри: %d", odd_digits);

    if (count_elements > 0) {
        rewind(f_bin);
        
        int *arr = malloc(count_elements * sizeof(int));
        fread(arr, sizeof(int), count_elements, f_bin);
        fclose(f_bin);

        qsort(arr, count_elements, sizeof(int), compare);

        FILE *f_txt_out;
        f_txt_out = fopen("sorted.txt", "w");
        for (int i = 0; i < count_elements; i++) {
            fprintf(f_txt_out, "%d ", arr[i]);
        }
        fclose(f_txt_out);
        free(arr);
    }

    return 0;
}