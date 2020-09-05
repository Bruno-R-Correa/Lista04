/*
RA: 19118 e 19139
Nome: Bruno Ricardo Correa e Matheus Mastelini
Materia: Estrutura de Dados
Prof: Jose Alberto Matioli
*/
#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

struct lista{
    int info;
    struct lista * prox;
};

typedef struct lista Lista;

Lista * inicializa();
int vazia (Lista* l);
void imprime (Lista* l);
Lista* insere (Lista* l, int i);

Lista * separa(Lista * l, int n);
Lista * concatena (Lista * l1, Lista* l2);
Lista * constroi (int n, int* v);
Lista * retira_prefixo (Lista * l, int n);

#endif // FUNCOES_H_INCLUDED
