//Programa para saber a soma dos valores


#include <stdio.h>
#include <stdlib.h>

void main() {

    int soma, num1, num2;
    system ("clear");
    printf ("Informe o primeiro número:\n");
    scanf("%d" , &num1);

    printf ("Informe o segundo número:\n");
    scanf ("%d" , &num2);

    soma = num1 + num2;

    printf ("\nResultado da soma: %d\n", soma);

    return 0;

}