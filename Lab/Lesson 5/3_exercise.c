// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int r = 4, c = 4, i, j, count;

//     int *arr[r];
//     for (i = 0; i < r; i++)
//         arr[i] = (int *)malloc(c * sizeof(int));

//     // Note that arr[i][j] is same as *(*(arr+i)+j)
//     count = 0;
//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count

//     for (i = 0; i < r; i++)
//         for (j = 0; j < c; j++)
//             printf("%d ", arr[i][j]);

//     /* Code for further processing and free the
//       dynamically allocated memory */

//     for (int i = 0; i < r; i++)
//         free(arr[i]);

//     printf("\n");

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r = 4, c = 5, len = 0;
    int *ptr, **arr;
    int count = 0, i, j;

    len = sizeof(int *) * r + sizeof(int) * c * r;
    arr = (int **)malloc(len);

    // ptr is now pointing to the first element in of 2D array
    ptr = (int *)(arr + r);

    // for loop to point rows pointer to appropriate location in 2D array
    for (i = 0; i < r; i++)
        arr[i] = (ptr + c * i);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            printf("%d ", arr[i][j]);

    return 0;
}
