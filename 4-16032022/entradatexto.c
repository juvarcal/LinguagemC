/*O programa pede para o úsuario
que digite seu nome. Ao fazer será
alocado na variável nome*/

#include <stdio.h>

int main ()

{
    char nome[50];

    printf ("Digite o seu nome e tecle enter.\n");
    scanf ("%s" ,nome); ////Quando é usado mais de um caracter.
    printf ("%s \n", nome);



    return 0;
}