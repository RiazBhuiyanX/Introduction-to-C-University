#include <stdio.h>
#include <stdbool.h>

// Структура за служител - пази данните на един работник
struct Sluzhitel {
    int id;             // Идентификационен номер на служителя
    double pochPlashtane; // Почасово плащане ( евро/час)
    double chasove;     // Брой отработени часове за една седмица
    double zaplata;     // Изчислена седмична заплата (след данъци)
};

int main() {
    // Избора от менюто
    int izbor;

    // Програмата работи, докато потребителят не избере "Изход"
    while (true) {
        // Показваме менюто
        printf("1. Добави нов служител\n");
        printf("2. Покажи заплатите\n");
        printf("3. Изход\n");
        printf("Избор: ");
        scanf("%d", &izbor);

        // Опция 1: Добавяне на нов служител
        if (izbor == 1) {
            struct Sluzhitel s;

            // Въвеждаме данните за служителя
            printf("Въведете ID: ");
            scanf("%d", &s.id);

            printf("Почасово плащане (евро): ");
            scanf("%lf", &s.pochPlashtane);

            printf("Часове за седмицата: ");
            scanf("%lf", &s.chasove);

            // Изчисляваме заплатата
            double brutoZaplata;

            if (s.chasove > 40) {
                // Ако е работил повече от 40 часа:
                // Първите 40 часа се плащат нормално
                double normalniChasove = 40 * s.pochPlashtane;

                // Часовете над 40 се плащат на 150% (1.5 пъти повече)
                double izvanredniChasove = (s.chasove - 40) * s.pochPlashtane * 1.5;

                brutoZaplata = normalniChasove + izvanredniChasove;
            } else {
                // Ако е работил 40 или по-малко часа
                brutoZaplata = s.chasove * s.pochPlashtane;
            }

            // Данъкът е 3.65% от общата заработка
            double danak = brutoZaplata * 0.0365;

            // Нетната заплата = бруто - данък
            s.zaplata = brutoZaplata - danak;

            // Записваме служителя в двоичния файл
            // "ab", за да добавяме в края, без да трием старите записи
            FILE *fail;
            fail = fopen("staff.bin", "ab");
            fwrite(&s, sizeof(struct Sluzhitel), 1, fail);
            fclose(fail);

            printf("Служителят е записан успешно!\n");
        }

        // Опция 2: Показване на заплатите
        else if (izbor == 2) {
            FILE *fail;
            fail = fopen("staff.bin", "rb");

            // Проверяваме дали файлът съществува
            if (fail == NULL) {
                printf("Няма записани служители.\n");
                continue; // Връщаме се към менюто
            }

            printf("Списък със заплати:\n");
            printf("ID Заплата\n");

            // Четем записи един по един, докато файлът не свърши
            struct Sluzhitel s;
            while (fread(&s, sizeof(struct Sluzhitel), 1, fail) == 1) {
                printf("%d\t%.2f евро\n", s.id, s.zaplata);
            }

            fclose(fail);
        }
        // Опция 3: Изход
        else if (izbor == 3) {
            printf("Довиждане!\n");
            break;
        }
        // Ако потребителят въведе нещо друго
        else {
            printf("Невалиден избор! Опитайте отново.\n");
        }
    }

    return 0;
}