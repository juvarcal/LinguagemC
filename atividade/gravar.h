#include <stdio.h>
#include <stdlib.h>
#include "curso.h"
#include "unidade.h"

void gravar() {

/*
O tipo FILE é utlizado para criar arquivos.
Este arquivo deve ser alocado em memória, portanto, sua
criação deve ser feita como ponteiro
*/

    FILE *arquivo;


//A função fopen é reponsável por criar um arquivo
//Este arquivo fica disponível em memória até o fechamento

    arquivo = fopen ("dados.txt", "w");

//Verificar se o arquivo existe. Se ele não existe, então
//exibir a mensagem de arquivo não encontrado e sair da 
//execução do programa

    if (arquivo==NULL) {
        printf("rquivo não encontrado ou não existe.");
        exit(1); //encerrar programa 

    }

//Criando ponteiro para mostrar o endereço de memória
    curso crs, *pcrs;
    unidade und, *pund;

    pcrs = &crs;
    pund = &und;


    
printf("############################################################################################");

    printf("\n\nEntre com o curso desejado:\n");
    fgets(pcrs->curso, 30, stdin);

    printf("Entre com a descrição do curso:\n");
    fgets(pcrs->descricao, 255, stdin);

    printf("Entre com a carga horária desejada:\n");
    fgets(pcrs->cargahoraria, 10, stdin);
    
    printf("Entre com a data de início do curso:\n");
    fgets(pcrs->datainicio, 10, stdin);

    printf("Entre com a data de termino do curso:\n");
    fgets(pcrs->datatermino, 10, stdin);

    printf("Entre com o Valor do curso:\n\n");
    fgets(pcrs->valor, 10, stdin);

printf("____________________________________________________________________________________________");

    printf("\n\nInforme a unidade desejada:\n");
    fgets(pund->unidade, 30, stdin);

    printf("Informe a localização da unidade desejada:\n");
    fgets(pund->localizacao, 50, stdin);

    printf("Informe o horário da unidade desejada:\n");
    fgets(pund->horario, 10, stdin);

    printf("Informe o número telefonico da unidade desejada:\n");
    fgets(pund->telefone, 15, stdin);
printf("############################################################################################");

//gravar o nome no arquivo
    fprintf(arquivo, pcrs->curso);
    fprintf(arquivo, pcrs->descricao);
    fprintf(arquivo, pcrs->cargahoraria);
    fprintf(arquivo, pcrs->datainicio);
    fprintf(arquivo, pcrs->datatermino);
    fprintf(arquivo, pcrs->valor);

    fprintf(arquivo, pund->unidade);
    fprintf(arquivo, pund->localizacao);
    fprintf(arquivo, pund->horario);
    fprintf(arquivo, pund->telefone);

//tirar o arquivo da memória. Fechar o arquivo
    fclose(arquivo);


}