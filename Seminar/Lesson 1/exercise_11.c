#include <stdio.h>

int main()
{
    double N, W, L, M, O;
    printf("N, W, L, M, O: "); 
    scanf("%lf %lf %lf %lf %lf", &N, &W, &L, &M, &O);
    double tiles = (N*N - M*O) / (W*L);
    printf("Num of tiles: %.2f, Time: %.2f min\n", tiles, tiles * 0.2);
}