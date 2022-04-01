//Programa para identificar o produto desejado.

#include <stdio.h>
#include <stdlib.h>

void main () {

    char produto[30];
    system ("clear");
    printf ("Informe o nome do produto:\n");
    scanf("%s", &produto);

    printf ("produto: %s \n", produto);

    return 0;
}