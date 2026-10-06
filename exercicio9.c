#include <stdio.h>

int main(void) {
    int v[6], i;
    for (i = 0; i < 6; i++) {
        do {
            printf("Valor par %d: ", i + 1);
            scanf("%d", &v[i]);
            if (v[i] % 2 != 0) printf("Numero impar! Digite um par.\n");
        } while (v[i] % 2 != 0);
    }
    printf("Ordem inversa:");
    for (i = 5; i >= 0; i--) printf(" %d", v[i]);
    printf("\n");
    return 0;
}