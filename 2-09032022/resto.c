/*Crie um programa em C que receba 
um número e exiba ao usuário o resto da divisão.*/

#include <stdio.h> //Biblioteca input/output

int main ()

{

    int x, y, z; //Declara var. X e Y inteira


    printf ("Digite o número"); //Mostrar na tela
    scanf ("%d" , &x); //ler a variavel.

    printf ("Digite o número");
    scanf ("%d" , &y);

    //calculo da divisão e o resto da divisão,
    z = x % y;

    printf("O resultado é %d/n" ,z);

    return 0;

}

    //fim main.
