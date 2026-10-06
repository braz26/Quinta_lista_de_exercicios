#include <stdio.h>

#define N 10

int main(void) {
    int v[N], i, maior, menor;
    for (i = 0; i < N; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    maior = menor = v[0];
    for (i = 1; i < N; i++) {
        if (v[i] > maior) maior = v[i];
        if (v[i] < menor) menor = v[i];
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}