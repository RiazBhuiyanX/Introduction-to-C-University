#include<stdio.h>
#include<stdlib.h>

int main(){
    char str[80] = "This is a file system test.";

    FILE *fp;
    char *p;

    fp = fopen("file_2.txt", "w");
    if(fp == NULL){
        printf("Error opening file!");
        exit(1);
    }

    p = str;
    while(*p){
        if(fputc(*p, fp) == EOF){
            printf("Error writing to file!");
            fclose(fp);
            exit(1);
        }
        p++;
    }
    fclose(fp);

    fp = fopen("file_2.txt", "r");
    if(fp == NULL){
        printf("Error opening file!");
        exit(1);
    }

    int i;
    for(;;){
        i = fgetc(fp);
        if(i == EOF) break;
        putchar(i);
    }

    fclose(fp);
    return 0;
}
