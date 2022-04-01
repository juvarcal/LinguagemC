/*Programa para apresentar números pares
entre 0 e 50. vamos usar a estrutura
while.*/

#include <stdio.h>

int main(){

int f = 0;
do{
    if(1%2 == 0){
        printf("O número %d é par\n" , f);
    }
        f++;
} while(f <= 50);




    return 0;
}