#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr = arr;

    printf("Size of array in this compiler is %ld\n", sizeof(arr));

    printf("Size of ptr is %ld\n", sizeof(ptr));

    return 0;
}