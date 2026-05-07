#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    // Отваряме текстовия файл и четем думите
    FILE *tekstovFail;
    tekstovFail = fopen("input.txt", "r");
    if (tekstovFail == NULL) {
        printf("Грешка: не може да се отвори input.txt!\n");
        return 1;
    }

    // Четем всички думи от файла в масив
    // Всяка дума е до 50 символа, пазим до 200 думи
    char dumi[200][51];
    int broyDumi = 0;

    while (fscanf(tekstovFail, "%s", dumi[broyDumi]) == 1) {
        broyDumi++;
    }
    fclose(tekstovFail);

    // Строим верига от думи
    // Правило: следващата дума трябва да започва с последния символ на предишната.
    // Първата дума от файла винаги влиза във веригата.

    // Динамичен масив за веригата
    // malloc ни дава точно толкова памет, колкото ни трябва
    char (*veriga)[51] = malloc(broyDumi * sizeof(char[51]));
    int razmerVeriga = 0;

    // Масив, който следи кои думи вече сме използвали (0 = не, 1 = да)
    int *izpolzvana = calloc(broyDumi, sizeof(int));

    // Първата дума влиза директно
    strcpy(veriga[0], dumi[0]);
    razmerVeriga = 1;
    izpolzvana[0] = 1;

    // За всяка дума във веригата търсим следващата
    for (int i = 0; i < razmerVeriga; i++) {
        // Намираме последния символ на текущата дума
        int dulzhina = strlen(veriga[i]);
        char posledenSimvol = veriga[i][dulzhina - 1];

        // Търсим първата дума от файла, която започва с този символ
        for (int j = 0; j < broyDumi; j++) {
            // Проверяваме дали думата започва с нужния символ и дали не е вече използвана
            if (dumi[j][0] == posledenSimvol && izpolzvana[j] == 0) {
                // Добавяме думата към веригата
                strcpy(veriga[razmerVeriga], dumi[j]);
                razmerVeriga++;
                izpolzvana[j] = 1;
                // Взимаме само първата подходяща дума
                break;
            }
        }
    }

    // Записваме веригата в бинарен файл
    // Думите се разделят с интервал " "
    FILE *binarenFail;
    binarenFail = fopen("output.bin", "wb");
    for (int i = 0; i < razmerVeriga; i++) {
        // Записваме всеки символ от думата поотделно
        for (int j = 0; j < (int)strlen(veriga[i]); j++) {
            fputc(veriga[i][j], binarenFail);
        }
        // Между думите слагаме интервал (-1, за да не сложим интервал след последната)
        if (i < razmerVeriga - 1) {
            fputc(' ', binarenFail);
        }
    }
    fclose(binarenFail);

    // Четем и показваме бинарния файл символ по символ
    binarenFail = fopen("output.bin", "rb");

    // int, защото fgetc връща int
    int ch;
    while ((ch = fgetc(binarenFail)) != EOF) {
        printf("%c", ch);
    }
    fclose(binarenFail);

    free(veriga);
    free(izpolzvana);

    return 0;
}