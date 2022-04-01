/*Programa para calcular a situação 
do aluno. Neste programa teremos
as seguintes saídas:
Aprovado, quando nota maior ou igual a 7
Reprovado, quando nota menor ou igual a 4
Recuperação, quando nota entre maior que 4 
e menosr que 7.
*/


#include <stdio.h>

#define MEDIAAPROVADO 7.0
#define MEDIAREPROVADO 4.0

int main ()

{

    float nota;
    printf ("Informe a nota do Aluno.\n");
    scanf ("%f", &nota);

    if (nota >= MEDIAAPROVADO){
        printf ("O aluno está aprovado.\n");
        
        }

    else if (nota <= MEDIAREPROVADO){
        printf ("O aluno está reprovado.\n");
    }

    else{
        printf("O aluno está em recuperação.\n");
    }

    return 0;

}
   //fim main