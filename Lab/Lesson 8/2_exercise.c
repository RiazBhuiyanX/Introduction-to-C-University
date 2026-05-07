// В двоичен файл имате цяло число N и след него N цели числа
// Да се напише програма, която създава файла
// Да се напише програма, която изкарва на екрана броя на четните и броя на нечетните цифри от дадените N числа
// Да се напише програма, която прочита така подадения масив от N елемента и изкарва в текстови файл сортирания във възходящ ред масив
#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    FILE *f_bin_out; 
    f_bin_out = fopen("numbers.bin", "wb");
    if (f_bin_out == NULL) {
        printf("Грешка при отваряне на файла!\n");
        return 1;
    }

    int N;
    printf("Въведете брой числа (N): ");
    scanf("%d", &N);

    fwrite(&N, sizeof(int), 1, f_bin_out);

    printf("Въведете %d цели числа:\n", N);
    for (int i = 0; i < N; i++) {
        int temp;
        scanf("%d", &temp);
        fwrite(&temp, sizeof(int), 1, f_bin_out);
    }
    fclose(f_bin_out);


    FILE *f_bin_in;
    f_bin_in = fopen("numbers.bin", "rb");
    if (f_bin_in == NULL) {
        printf("Грешка при отваряне на файл!\n");
        return 1;
    }

    int read_N;
    fread(&read_N, sizeof(int), 1, f_bin_in);

    int even_digits = 0;
    int odd_digits = 0;
    for (int i = 0; i < read_N; i++) {
        int num;
        fread(&num, sizeof(int), 1, f_bin_in);
        
        int temp_num = abs(num);
        if (temp_num == 0){
           even_digits++; 
        } 
        
        while (temp_num > 0) {
            int digit = temp_num % 10;
            if (digit % 2 == 0) 
            {
                even_digits++;
            }
            else {
                odd_digits++;
            }
            temp_num /= 10;
        }
    }
    printf("\nБрой четни цифри: %d", even_digits);
    printf("\nБрой нечетни цифри: %d", odd_digits);
    
    rewind(f_bin_in);
    fread(&read_N, sizeof(int), 1, f_bin_in);

    int *arr = malloc(read_N * sizeof(int));
    fread(arr, sizeof(int), read_N, f_bin_in);
    fclose(f_bin_in);

    qsort(arr, read_N, sizeof(int), compare);

    FILE *f_txt_out;
    f_txt_out = fopen("sorted.txt", "w");

    for (int i = 0; i < read_N; i++) {
        fprintf(f_txt_out, "%d ", arr[i]);
    }

    fclose(f_txt_out);
    free(arr);

    return 0;
}