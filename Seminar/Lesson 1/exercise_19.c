#include <stdio.h>

int main()
{
    int seconds;
    printf("Seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = seconds % 3600 / 60;
    int left_seconds = seconds % 60;

    printf("%d hours %d minutes %d seconds", hours, minutes, left_seconds);
    return 0;
}
