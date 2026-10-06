#include <stdio.h>

#define N 10

int main(void) {
    int v[N], i, maior, pos = 0;
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    maior = v[0];
    for (i = 1; i < N; i++)
        if (v[i] > maior) { maior = v[i]; pos = i; }

    printf("Vetor:");
    for (i = 0; i < N; i++) printf(" %d", v[i]);
    printf("\nMaior elemento: %d (posicao %d)\n", maior, pos);
    return 0;
}