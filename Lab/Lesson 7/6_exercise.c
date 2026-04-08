#include <stdio.h>
#include <stdlib.h>

void bubbleSort(float *prices, int *quantities, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (prices[j] > prices[j + 1]) {
                
                float tempPrice = prices[j];
                prices[j] = prices[j + 1];
                prices[j + 1] = tempPrice;

                int tempQty = quantities[j];
                quantities[j] = quantities[j + 1];
                quantities[j + 1] = tempQty;
            }
        }
    }
}

int main() {
    int n;
    printf("Начален брой елементи: ");
    scanf("%d", &n);

    float *prices = malloc(n * sizeof(float));
    int *quantities = malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
        printf("Продукт %d - цена и количество: ", i + 1);
        scanf("%f %d", &prices[i], &quantities[i]);
    }

    int m;
    printf("Още колко елемента да добавим? ");
    scanf("%d", &m);

    prices = realloc(prices, (n + m) * sizeof(float));
    quantities = realloc(quantities, (n + m) * sizeof(int));

    for (int i = n; i < n + m; i++) {
        printf("Нов продукт - цена и количество: ");
        scanf("%f %d", &prices[i], &quantities[i]);
    }

    bubbleSort(prices, quantities, n + m);

    float totalSum = 0;
    for (int i = 0; i < n + m; i++) {
        totalSum += prices[i] * quantities[i];
        printf("Цена: %.2f  Количество: %d  Обща стойност: %.2f\n", 
                prices[i], quantities[i], prices[i] * quantities[i]);
    }
    printf("Обща сума на всички елементи: %.2f\n", totalSum);

    free(prices);
    free(quantities);

    return 0;
}


