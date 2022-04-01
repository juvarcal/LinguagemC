/*programa para calcular o resultado
da situação do aluno se está aprovado
ou reprovado. Vamos levar em consideração
a nota do aluno e compará-la a média de 
aprovação da escola. Caso a nota do aluno 
seja maior ou igual a 7, então o aluno
etara aprovado, caso contrário,
estará reprovado*/

/*incluir o cabeçalho de entrada e saida
de dados padrão: STD (stander -> padrão),
(IN -> input | autput)*/

#include <stdio.h>

//Definir uma constante . Sempre em letra MAIÚSCULA

#define MEDIAESCOLA 7.0

int main ()

{ 

//Declaração da variável notaAluno com o tipo FLOAT
float notaAluno;

printf("Informe a nota do aluno.\n");
scanf("%f", &notaAluno);

//Desvio de fluxo IF... Else
/*A nota do aluno igual ou maior
a média escolar sera aprovado*/
if(notaAluno >= MEDIAESCOLA){
    printf("O aluno está aprovado\n");
}

else{
    printf ("O aluno está reprovado.\n");
}

return 0;

}

// fim 