#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct aluno
{
  int matricula;
  char nome[30];
};

typedef struct fila Fila;

Fila *criaFila();
void liberaFila(Fila *fi);
int tamanhoFila(Fila *fi);
int filaCheia(Fila *fi);
int filaVazia(Fila *fi);
int inserefila(Fila *fi, struct aluno al);
int removeFila(Fila *fi);
int consultaFila(Fila *fi, struct aluno *al);