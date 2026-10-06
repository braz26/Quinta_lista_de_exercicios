#include <stdio.h>

#define N 8

int main(void) {
    int v[N], i, x, y;
    for (i = 0; i < N; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &v[i]);
    }
    do {
        printf("Posicao X (0 a %d): ", N - 1);
        scanf("%d", &x);
    } while (x < 0 || x >= N);
    do {
        printf("Posicao Y (0 a %d): ", N - 1);
        scanf("%d", &y);
    } while (y < 0 || y >= N);
    printf("v[%d] + v[%d] = %d\n", x, y, v[x] + v[y]);
    return 0;
}