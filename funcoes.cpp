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

Lista * inicializa()
{
    return NULL;
}

int vazia (Lista* l)
{
    return l==NULL;
 }

 Lista * criaNo(int v)
 {
     Lista * aux;
     aux=(Lista *) malloc(sizeof(Lista));

     if(aux!=NULL)
     {
         aux->info = v;
         aux->prox = NULL;
     }

     return aux;
 }

 Lista* insere (Lista* l, int i)
 {
      Lista * novo = criaNo(i);
      novo->prox = l;
      return novo;
 }

void imprime (Lista* l)
{
    Lista * p;
    if(vazia(l)){
        printf("Lista vazia!");
    }
    else{
        printf(" | ");
        for(p=l; p!=NULL; p=p->prox)
        {
            printf("%d | ",p->info);
        }
        printf("\n");
    }
}

Lista * separa(Lista * l, int n){
    Lista* p, *aux = l;
    for(p=l;p->info !=n;p = p->prox)
    {
        l = l->prox;
    }
    p = p->prox;
    l->prox = NULL;
    l = aux;
return p;
}

Lista * concatena (Lista * l1, Lista* l2){
    Lista* p;
    p = l1;
    while(l1->prox != NULL) l1 = l1->prox;
    l1->prox = l2;
    l1 = p;
return l1;
}

Lista * constroi (int n, int* v){
    Lista* l;
    l = inicializa();
    if(n != 0)
    for(int cont = n-1; cont >= 0; cont--)
    {
        l = insere(l,v[cont]);
    }
return l;
}

Lista * retira_prefixo (Lista * l, int n){
    int tamanho = 0, retirar = n;
    Lista *p;
    for(p = l;p != NULL;p = p->prox)
    {
        tamanho++;
        if(retirar>=0)
        {
            l = p;
            free(p);
            retirar--;
        }
    }
    if(tamanho-n <= 0) l = NULL;
return l;
}
