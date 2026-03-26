#include <stdio.h>

int main()
{
    int hours, min;
    printf("Enter hours and mins: \n");
    scanf("%d %d", &hours, &min);
    min += 15;

    if (min >= 60)
    {
        hours += 1;
        min -= 60;
    }

    if (hours >= 24)
    {
        hours -= 24;
    }

    printf("%d:%02d\n", hours, min);
}