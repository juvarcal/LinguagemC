/*Programa para mostrar quanto cada 
funcionario ganha de acordo com sua função.*/

#include <stdio.h>

int main ()

    { 
        char cargo[15];
    printf ("Digite o seu cargo e tecle ENTER.");
    scanf ("%s", cargo);

    if (strcmp (cargo, "diretor")==0){
        printf ("O salário do(a) Diretor(a) é 15.000,00\n");
    }

    else if (strcmp (cargo ,"gerente")==0){
        printf ("O salário do(a) Gerente é 12.000,00\n");
    }

    else if (strcmp (cargo ,"analista")==0){
        printf ("O salário do(a) Analista é 8.000,00\n");
    }

    else if (strcmp (cargo ,"assistente")==0){
        printf ("O salário do(a) Assistente é 4.000,00\n");
    }

    else if (strcmp (cargo ,"auxiliar")==0) {
        printf ("O salário do(a) Auxiliar é 2.000,00\n");
    }

        else {
            printf ("o salário de Outros é 1.000,00\n");
        }






return 0;

}