#include <stdio.h>

#define N 10

int main(void) {
    double v[N], q[N];
    int i;
    for (i = 0; i < N; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%lf", &v[i]);
        q[i] = v[i] * v[i];
    }
    printf("\nVetor original:\n");
    for (i = 0; i < N; i++) printf("%.2f ", v[i]);
    printf("\nQuadrados:\n");
    for (i = 0; i < N; i++) printf("%.2f ", q[i]);
    printf("\n");
    return 0;
}