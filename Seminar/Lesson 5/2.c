#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Структура за продукт - описва едно сладкарско изделие
struct Product {
    char ime[50];       // Име на продукта
    double cena;        // Цена на продукта
    int nomer;          // Уникален номер на продукта
    bool nalichen;      // Дали продуктът е наличен
};

// Структура за поръчка - описва кой какво иска
struct Order {
    char adres[100];    // Адрес на клиента
    int produktNomer;   // Номер на продукта, който клиентът иска
    bool izpulnena;     // Дали поръчката е изпълнена
};

int main() {
    // Масиви, в които пазим всички продукти и поръчки
    struct Product produkti[100];
    struct Order poruchki[100];

    // Броячи - колко продукта и поръчки имаме до момента
    int broyProdukti = 0;
    int broyPoruchki = 0;

    // Тук записваме командата, която потребителят въвежда
    char komanda[20];

    printf("Въведете команди (Product, Order, END):\n");

    // Безкраен цикъл - четем команди, докато не получим END
    while (true) {
        scanf("%s", komanda);

        // Ако командата е END, спираме програмата
        if (strcmp(komanda, "END") == 0) {
            break;
        }

        // Команда "Product" - Цецко е направил нов продукт
        if (strcmp(komanda, "Product") == 0) {
            // Четем данните за новия продукт
            scanf("%s", produkti[broyProdukti].ime);
            scanf("%lf", &produkti[broyProdukti].cena);
            scanf("%d", &produkti[broyProdukti].nomer);

            // Маркираме го като наличен
            produkti[broyProdukti].nalichen = true;

            // Проверяваме дали някоя поръчка чака точно този продукт
            for (int i = 0; i < broyPoruchki; i++) {
                // Ако поръчката НЕ е изпълнена и номерът съвпада
                bool chakashtaPoruchka = (poruchki[i].izpulnena == false);
                bool sushiqtProdukt = (poruchki[i].produktNomer == produkti[broyProdukti].nomer);

                if (chakashtaPoruchka && sushiqtProdukt) {
                    // Изпълняваме поръчката веднага
                    printf("Client %s ordered %s\n", poruchki[i].adres, produkti[broyProdukti].ime);
                    poruchki[i].izpulnena = true;
                    produkti[broyProdukti].nalichen = false;
                }
            }

            broyProdukti++;
        }

        // Команда "Order" - някой иска да поръча продукт
        else if (strcmp(komanda, "Order") == 0) {
            // Четем данните за поръчката
            scanf("%s", poruchki[broyPoruchki].adres);
            scanf("%d", &poruchki[broyPoruchki].produktNomer);

            // По подразбиране поръчката НЕ е изпълнена
            poruchki[broyPoruchki].izpulnena = false;

            // Проверяваме дали вече имаме наличен продукт с този номер
            for (int i = 0; i < broyProdukti; i++) {
                bool produktEnalichen = (produkti[i].nalichen == true);
                bool sushiqtNomer = (produkti[i].nomer == poruchki[broyPoruchki].produktNomer);

                if (produktEnalichen && sushiqtNomer) {
                    // Продуктът е наличен - изпълняваме поръчката веднага
                    printf("Client %s ordered %s\n", poruchki[broyPoruchki].adres, produkti[i].ime);
                    poruchki[broyPoruchki].izpulnena = true;
                    produkti[i].nalichen = false;
                    // Намерихме продукт, не търсим повече
                    break;
                }
            }

            broyPoruchki++;
        }
    }

    return 0;
}