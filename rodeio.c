/*
    SISTEMA RODEIO
    AUTOR - RODRIGO GOMES SERRÃO
    DATA - 12/02/2022
*/


#include <stdio.h>
#include <stdlib.h>

// CABEÇALHO DE FUNÇÕES





// FUNÇÃO PRINCIPAL

int main()
{
    char evento[40]; //nome do evento
    char local[40]; //local do evento

    unsigned int num_competidores; //numero de competidores da etapa
    unsigned int num_touros; //numero de touros do evento

    char nome_comp[40]; //nome do competidor
    int num_comp; //numero do competidor
    char nome_touro[40];

    int nota_comp[3]; //nota do competidor em cada round
    int nota_touro; //nota do touro
    int notafinal_comp; //nota final do competidor
    int notafinal_touro; //nota final do touro

    system("clear");
    printf("************************************************************\n");
    printf("Informe o nome do evento: ");
    scanf("%s", &evento);
    getchar();
    printf("Informe o local do evento: ");
    scanf("%s", &local);
    getchar();
    printf("Informe o numero de competidores: ");
    scanf("%d", &num_competidores);
    printf("Informe o numero de touros do evento: ");
    scanf("%d", num_touros);





    getchar();
    return 0;
}