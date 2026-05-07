#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("file_1.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    
    fprintf(fp, "My name is Riaz Bhuiyan and Im 20 years old.");
    fclose(fp);
    return 0;
}