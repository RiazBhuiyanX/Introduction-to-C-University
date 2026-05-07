#include <stdio.h>

int main() {
    char sourceName[100];
    int key;

    printf("Ime na fail za kodirane: ");
    scanf("%s", sourceName);
    printf("Klyuch (2-10): ");
    scanf("%d", &key);

    FILE *f1 = fopen(sourceName, "r");
    FILE *f2 = fopen("coded.txt", "w");

    if (f1 == NULL || f2 == NULL) {
        printf("Greshka pri otvaryane na failovete!\n");
        return 1;
    }

    char c;
    while ((c = fgetc(f1)) != EOF) {
        fputc(c + key, f2);
    }

    fclose(f1);
    fclose(f2);
    printf("Gotovo! Kodiranoto sdyrjanie e v coded.txt\n");

    return 0;
}