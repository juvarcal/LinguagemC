//programa para ler nomes compostos.

#include <stdio.h>
#include <stdlib.h>

void main () {
    
    char produto[30];
    system ("clear");
    printf ("Informe o nome do produto:\n");
    scanf("\n%[^\n]s", &produto);

    printf("Produtos: %s, \n", produto);

    return 0;
}