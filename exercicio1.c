#include <stdio.h>

int main(void) {
    int A[6], soma, i;

    /* (a) atribuicao dos valores */
    A[0] = 1; A[1] = 0; A[2] = 5; A[3] = -2; A[4] = -5; A[5] = 7;

    /* (b) soma de A[0], A[1] e A[5] */
    soma = A[0] + A[1] + A[5];
    printf("Soma de A[0], A[1] e A[5]: %d\n", soma);

    /* (c) posicao 4 recebe 100 */
    A[4] = 100;

    /* (d) mostra o vetor, um valor por linha */
    for (i = 0; i < 6; i++)
        printf("%d\n", A[i]);
    return 0;
}