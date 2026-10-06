#include <stdio.h>

#define N 5

int main(void) {
    double v[N], maior, menor, soma = 0;
    int i;
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%lf", &v[i]);
    }
    maior = menor = v[0];
    for (i = 0; i < N; i++) {
        soma += v[i];
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Valores lidos:");
    for (i = 0; i < N; i++) printf(" %.2f", v[i]);
    printf("\nMaior: %.2f\nMenor: %.2f\nMedia: %.2f\n", maior, menor, soma / N);
    return 0;
}