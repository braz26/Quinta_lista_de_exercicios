#include <stdio.h>

#define N 15

int main(void) {
    double nota[N], soma = 0;
    int i;
    for (i = 0; i < N; i++) {
        printf("Nota do aluno %d: ", i + 1);
        scanf("%lf", &nota[i]);
        soma += nota[i];
    }
    printf("Media geral: %.2f\n", soma / N);
    return 0;
}