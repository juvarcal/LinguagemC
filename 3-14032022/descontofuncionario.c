/*Programa para calcular o deconto de
um funcionario. onde o sálario sendo
maior que 5000.00, terá um desconto de 5%. 
Caso contario não havera desconto
*/

/*Incluir o cabeçalho de entrada e saída
de dados padrão: STD (STANDER -> padrão),
(IN-> input | autput)*/
#include <stdio.h>

//Definir uma constante sempre com letra maiuscúla

#define LIMITE 5000.00

int main ()

{ 
    float salariofuncionario;
    printf ("Informe o seu salário.\n");
    scanf ("%f", &salariofuncionario);
    if(salariofuncionario > LIMITE){
    printf("O desconto será de %.2f\n", (salariofuncionario*5/100));
    printf("O valor final é %.2f\n", (salariofuncionario) - (salariofuncionario*5/100));
    }
    else{
        printf("Não há desconto.\n");
    }


return 0;

}

// fim main