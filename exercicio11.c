#include <stdio.h>

#define N 10

int main(void) {
    double v[N], somaPos = 0;
    int i, negativos = 0;
    for (i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &v[i]);
    }
    for (i = 0; i < N; i++) {
        if (v[i] < 0)      negativos++;
        else if (v[i] > 0) somaPos += v[i];
    }
    printf("Quantidade de negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", somaPos);
    return 0;
}