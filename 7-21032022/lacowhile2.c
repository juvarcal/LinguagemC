/*Programa para manter a tela sempre ativa
caso o usuário digite 9, a tela será liberada*/


#include <stdio.h>

int main (){

    int f1 = 0;
    printf ("Digite um número para sair.\n");
    scanf ("%d" , &f1);
    
    while (f1 != 9){
        system ("clear");
        printf ("\nVocê errou...!!! :p ");

        printf("Tente outra vez.\n");
        scanf ("%d" , &f1);
    }



    return 0;
}