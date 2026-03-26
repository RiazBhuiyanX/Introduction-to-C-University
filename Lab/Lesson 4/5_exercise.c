#include <stdio.h>

int main()
{
    // char greeting[] = "Riaz Bhuiyan";
    // printf("Greeting message: %s\n", greeting);
    // return 0;

    char name[20];
    printf("Enter your name: ");

    fgets(name, 20, stdin);
    printf("Your name is, ");
    puts(name);
    return 0;
}