/*Crie um programa em C que receba
dois números e realize quatro eperaçoes*/

#include <stdio.h> //Biblioteca input/output

int main()

{ 
    //declara a variavel
    float j, g, soma, multiplicacao, divisao, subtracao;

    //Mostrar na tela
    printf ("Digite o número: ");
    scanf ("%f" , &j);

    printf ("Digitar o número: ");
    scanf ("%f" , &g);

    soma = (j + g);
    multiplicacao  = (j * g);
    divisao = (j / g);
    subtracao = (j - g);
    

    printf ("O valor da soma é %f\n", soma);
    printf ("O valor da multiplicação é %f\n", multiplicacao);
    printf ("O valor da divisão é %f\n", divisao);
    printf ("O valor da subtração é %f\n", subtracao);


return 0;

}
    //fim main