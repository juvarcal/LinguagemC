//crie um programa em c que calcula a velocidade

#include <stdio.h> 

int main()

{
    int distancia, tempo, resultado;

    printf ("Entrar com a distância percorrida: ");
    scanf ("%d" , &distancia);

    printf ("Entrar com o tempo gasto:");
    scanf ("%d" , &tempo);

    resultado = tempo / distancia;

    printf ("Na velocidade média foi %d\n" , resultado);

    return 0; 

}

        //fim main