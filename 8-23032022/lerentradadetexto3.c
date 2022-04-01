//Programa para ler entrada de texto FGETS

#include <stdio.h>
#include <stdlib.h>

void main () {

    char produtos[30];
    printf("Informe o nome do produto: \n");
    fgets (produtos, 30, stdin);

    printf("Produtos: %s \n", produtos);

    return 0;
}