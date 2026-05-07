#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    int gosti;
    // Питаме колко хора ще идват, за да знаем колко посуда ни трябва
    printf("Въведете брой гости: ");
    scanf("%d", &gosti);

    // Тук ще събираме общата цена на всичко купено
    double sum = 0;
    // Броячи за всеки предмет
    int masi = 0, stolove = 0, chashi = 0, chinii = 0;
    // Променлива, в която ще записваме името на предмета (командата)
    char komanda[50];

    printf("Въведете предмети (PARTY! за край):\n");
    // Начало на безкраен цикъл - ще четем предмети, докато не получим команда за стоп
    while (true) {
        scanf("%s", komanda);
        if (strcmp(komanda, "PARTY!") == 0) {
            // Ако напишем PARTY!, цикълът спира веднага
            break;
        }

        // Проверяваме какъв е предметът и добавяме бройка и цена
        if (strcmp(komanda, "Table") == 0) {
            masi++;
            sum += 42.00;
        } else if (strcmp(komanda, "Chair") == 0) {
            stolove++;
            sum += 13.99;
        } else if (strcmp(komanda, "Cups") == 0) {
            chashi++;
            sum += 5.98;
        } else if (strcmp(komanda, "Dishes") == 0) {
            chinii++;
            sum += 21.02;
        }
    }

    // Една маса събира 8 души. Делим гостите на 8.
    int nujniMasi = gosti / 8;
    if (gosti % 8 != 0) {
        // Ако остане дори един човек, ни трябва още една цяла маса
        nujniMasi++;
    }

    // Всеки гост има нужда от стол
    int nujniStolove = gosti;

    // Чашите и чиниите се купуват на комплекти по 6 броя
    int nujniChashi = gosti / 6;
    if (gosti % 6 != 0) {
        // Ако гостите не са кратни на 6, купуваме още един комплект
        nujniChashi++;
    }
    int nujniChinii = gosti / 6;
    if (gosti % 6 != 0) {
        nujniChinii++;
    }

    printf("\nСума:");
    printf("%.2f", sum);

    // Проверяваме дали това, което сме купили, е достатъчно.
    // Ако нужните неща са повече от купените, казваме колко още трябва да се вземат.
    if (nujniMasi > masi) {
        printf("%d Table\n", nujniMasi - masi);
    }
    if (nujniStolove > stolove) {
        printf("%d Chairs\n", nujniStolove - stolove);
    }
    if (nujniChashi > chashi) {
        printf("%d Cups\n", nujniChashi - chashi);
    }
    if (nujniChinii > chinii) {
        printf("%d Dishes\n", nujniChinii - chinii);
    }

    return 0;
}