#include <stdio.h>
#include <string.h>

int proverkaAnagrama(char s1[], char s2[]) {
    if (strlen(s1) != strlen(s2)) {
        return 0;
    }

    int broy1[256] = {0};
    int broy2[256] = {0};

    for (int i = 0; i < strlen(s1); i++) {
        broy1[(int)s1[i]]++;
        broy2[(int)s2[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (broy1[i] != broy2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char duma1[50], duma2[50];
    printf("Vavedi dve dumi: ");
    scanf("%s %s", duma1, duma2);

    if (proverkaAnagrama(duma1, duma2) == 1) {
        printf("Da, anagrami sa.\n");
    } else {
        printf("Ne sa anagrami.\n");
    }
    return 0;
}