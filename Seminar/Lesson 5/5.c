#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char secret[] = "concatenation";
    int len = strlen(secret);
    char progress[50];
    int tries = 0;
    char letter;

    for (int i = 0; i < len; i++) {
        progress[i] = '_';
    }
    progress[len] = '\0';

    printf("Igra Besenica! Dumata ima %d bukvi.\n", len);

    while (tries < len + 2) {
        printf("\nProgres: %s\n", progress);
        printf("Vavedi bukva: ");
        scanf(" %c", &letter);
        tries++;

        for (int i = 0; i < len; i++) {
            if (secret[i] == letter) {
                progress[i] = letter;
            }
        }

        if (strcmp(progress, secret) == 0) {
            printf("Pobeda! Dumata beshe: %s\n", secret);
            printf("Broy vavedeni bukvi: %d\n", tries);
            return 0;
        }
    }

    printf("Gubish! Ne uspyaha da poznaesh dumata.\n");
    return 0;
}