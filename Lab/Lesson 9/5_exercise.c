#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *input;
    char *result;
    int length;

    input = malloc(100 * sizeof(char));
    if (input == NULL) {
        return 1;
    }

    printf("Въведете стринг: ");
    scanf("%s", input);

    length = strlen(input);
    result = malloc((length + 1) * sizeof(char));
    if (result == NULL) {
        free(input);
        return 1;
    }

    result[0] = input[0];
    int j = 1;

    for (int i = 1; i < length; i++) {
        if (input[i] != input[i - 1]) {
            result[j] = input[i];
            j = j + 1;
        }
    }


    result[j] = '\0';

    printf("Изход: %s\n", result);
    free(input);
    free(result);

    return 0;
}