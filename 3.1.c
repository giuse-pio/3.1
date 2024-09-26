#include <stdio.h>

int main(void)
{
    int numero;
    printf("inserisci il valore del numero: ");
    scanf("%d", &numero);
    if (numero %2 == 0) {
        printf("Il numero e' pari %d", numero);
    }
    else {
        printf("Il numero e' dispari %d", numero);
    }
}
