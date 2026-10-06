#include <stdio.h>

#define N 10

int main(void) {
    int v[N], i, pares = 0;
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) pares++;
    }
    printf("Quantidade de valores pares: %d\n", pares);
    return 0;
}