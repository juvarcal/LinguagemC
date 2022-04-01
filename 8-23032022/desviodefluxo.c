/*Programa que verifica se o número é maior que 20
em caso afirmativo deve imprimir a mensagem na tela
"Maior que 20".*/

#include <stdio.h>
#include <stdlib.h>

void main () {

    int num;
    printf ("Informe o número:");
    scanf ("%d", &num);

    if (num > 20) {
        printf ("Maior que 20\n");
    }
    
}