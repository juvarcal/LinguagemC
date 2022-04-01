//Pograma p/ calcular area, dado o raio
#include <stdio.h> //Biblioteca standard de input/output

#define PI 3,14159 //Constante PI

//a seguir função main
int main()
{
    float raio, area;   //Duas vars. declaradas
        
        //Mostra na tela uma mensagem com printf
    printf ("Digite o valor do raio do circuito, e enter\n");
        
        //le do teclado scanf; note o & em &raio
    scanf("%f", &raio);     // exemplos: 1.23 12.3e-1
    
        //usando 12 colunas, e 2 decimais arredondados
        //por ex. 1.576 é arredondado para 1.58,só na tela
    printf("Raio digitado é %12.2f\n",raio);
    area=PI *raio*raio;
    printf("area do circuito com raio %f é %f\n",raio,area);
    return 0;
}
    //fim main