#include <stdio.h>

int main() {
    int dist[5][5] = {
        //Sofia, Plovdiv, Varna, Burgas, Plevem
        {0, 145, 440, 383, 163},
        {145, 0, 372, 248, 291},
        {440, 372, 0, 130, 320},
        {383, 248, 130, 0, 168},
        {163, 291, 320, 168, 0}
    };

    int route[8];
    int totalKm = 0;

    printf("Zad 12: Vyvedete 8 koda na gradove (0-4): ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &route[i]);
    }

    for (int i = 0; i < 7; i++) {
        int cityFrom = route[i];
        int cityTo = route[i + 1];
        totalKm = totalKm + dist[cityFrom][cityTo];
    }

    printf("Obshta duljina na marshruta: %d km\n", totalKm);
    return 0;
}