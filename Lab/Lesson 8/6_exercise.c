#include <stdio.h>
#include <string.h>

struct Car {
    char brand[30];
    char model[6]; 
    float engine_volume;
    double price;
    char registered;
};

void add_car() {
    struct Car c;
    FILE *bin_f;
    FILE *txt_f;

    printf("Марка: ");
    scanf("%s", c.brand);
    printf("Модел (5 знака): ");
    scanf("%s", c.model);
    printf("Обем двигател: ");
    scanf("%f", &c.engine_volume);
    printf("Цена: ");
    scanf("%lf", &c.price);
    printf("Регистрация (Y/N): ");
    scanf(" %c", &c.registered);

    bin_f = fopen("cars.bin", "ab");
    fwrite(&c, sizeof(struct Car), 1, bin_f);
    fclose(bin_f);

    txt_f = fopen("cars.txt", "a");
    fprintf(txt_f, "%s %s %.2f %.2lf %c\n", 
            c.brand, c.model, c.engine_volume, c.price, c.registered);
    fclose(txt_f);
}

void print_files() {
    struct Car c;
    FILE *bin_f;
    FILE *txt_f;
    char buffer[200];

    printf("\n--- ДАННИ ОТ БИНАРНИЯ ФАЙЛ ---\n");
    bin_f = fopen("cars.bin", "rb");
    if (bin_f != NULL) {
        while (fread(&c, sizeof(struct Car), 1, bin_f) == 1) {
            printf("Марка: %s, Модел: %s, Обем: %.1f, Цена: %.2f, Рег: %c\n",
                   c.brand, c.model, c.engine_volume, c.price, c.registered);
        }
        fclose(bin_f);
    }

    printf("\n--- ДАННИ ОТ ТЕКСТОВИЯ ФАЙЛ ---\n");
    txt_f = fopen("cars.txt", "r");
    if (txt_f != NULL) {
        while (fgets(buffer, sizeof(buffer), txt_f)) {
            printf("%s", buffer);
        }
        fclose(txt_f);
    }
}

int main() {
    int choice;
    
    while (1) {
        printf("\n1. Добави кола\n2. Сравни файловете\n3. Изход\nИзбор: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            add_car();
        } else if (choice == 2) {
            print_files();
        } else {
            break;
        }
    }
    
    return 0;
}