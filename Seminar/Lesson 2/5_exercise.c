#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter seconds of all 3 participants: \n");
    scanf("%d %d %d", &a, &b, &c);

    int sum_sec = a + b + c;
    int min;
    int sec;

    min = sum_sec / 60;
    sec = sum_sec % 60;

    printf("%d:%02d\n", min, sec);
}