#include <stdio.h>

int main(void) {
    int v[6], i;
    for (i = 0; i < 6; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &v[i]);
    }
    printf("Ordem inversa:");
    for (i = 5; i >= 0; i--) printf(" %d", v[i]);
    printf("\n");
    return 0;
}