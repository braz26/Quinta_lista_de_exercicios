#include <stdio.h>

#define N 5

int main(void) {
    double v[N];
    int i, posMaior = 0, posMenor = 0;
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &v[i]);
    }
    for (i = 1; i < N; i++) {
        if (v[i] > v[posMaior]) posMaior = i;
        if (v[i] < v[posMenor]) posMenor = i;
    }
    printf("Maior valor (%.2f) na posicao %d\n", v[posMaior], posMaior);
    printf("Menor valor (%.2f) na posicao %d\n", v[posMenor], posMenor);
    return 0;
}