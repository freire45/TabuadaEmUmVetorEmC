#include <stdio.h>
#include <stdlib.h>

int indice;
int numero;
int A[11];

void main(){
    printf("Informe um valor: ");
    scanf("%d", &numero);

    for(indice = 0; indice < 11; indice ++){
            A[indice] = numero * indice;
    }

    for(indice = 0; indice < 11; indice++){
        printf("%d ", A[indice]);
    }

}
