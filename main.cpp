/*
RA: 19118 e 19139
Nome: Bruno Ricardo Correa e Matheus Mastelini
Materia: Estrutura de Dados
Prof: Jose Alberto Matioli
*/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "funcoes.h"

using namespace std;
int main()
{
    Lista *l1, *l2,*l3;
    int vetor[5] = {5,4,3,2,1};


    l1=inicializa();
    l2=inicializa();
    l3=inicializa();

    l1 = insere(l1, 1);
    l1 = insere(l1, 12);
    l1 = insere(l1, 5);
    l1 = insere(l1, 17);
    l1 = insere(l1, 3);

//imprime a lista em seu formato original
    cout << "Lista 1 - ORIGINAL" << endl;
    imprime(l1);
//chama a funcao responsavel por separar a lista
    l2=separa(l1,5);
//imprime a lista 1 separada no elemento 5
    cout << "1) Lista 1 - SEPARADA NO ELEMENTO 5" << endl;
    imprime(l1);
//imprime a lista 2 a partir do elemento 5
    cout << "1) Lista 2 - FILHA DE Lista 1" << endl;
    imprime(l2);
//remonta a lista 1 e imprime ela
     cout << "2) Lista 1 - REMONTADA COM Lista 2" << endl;
    l1 = concatena(l1,l2);
    imprime(l1);
//cria uma lista e imprime a partir de um vetor de inteiros
    l3 = constroi(5,vetor);
    cout << "3) Lista 3 - MONTADA A PARTIR DE UM VETOR" << endl;
    imprime(l3);
//retira prefixo e imprime a lista apos a modificacao
    l1 = retira_prefixo(l1,2);
    printf("4) Lista 1 - RETIRADOS 2 PRIMEIROS ELEMENTOS\n");
    imprime(l1);
    cout << "Pressione enter para sair...";
    char c = getchar();
    return 0;
}
