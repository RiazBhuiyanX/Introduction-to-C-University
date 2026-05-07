#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int args, char *argv[]) {
    FILE *fp;
    double id;
    int d;
    char str[80];

    if (args != 2){
        printf("Specify file name. \n");
        exit(1);
    }

    if((fp = fopen(argv[1], "w")) == NULL){
        printf("Error opening file! \n");
        exit(1);
    }
    fprintf(fp, "%f %d %s", 12345.342, 1908, "hello");
    fclose(fp);

    if ((fp = fopen(argv[1], "r")) == NULL){
        printf("Error opening file! \n");
        exit(1);
    }

    fscanf(fp, "%lf%d%s", &id, &d, str);
    printf("Read from file: %f %d %s", id, d, str);
    fclose(fp);

    return 0;
}