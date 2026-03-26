#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c){
        printf("Yes");
    } else {
        printf("No");
    }
}