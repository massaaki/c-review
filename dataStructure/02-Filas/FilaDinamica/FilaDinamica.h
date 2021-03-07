#include <stdio.h>
#include <stdlib.h>

struct aluno
{
  int matricula;
  char nome[30];
};

typedef struct fila Fila;

Fila *criaFila();
void LiberaFila(Fila *fi);
int tamanhoFila(Fila *fi);
int filaCheia(Fila *fi);
int filaVazia(Fila *fi);
int insereFila(Fila *fi, struct aluno al);
int removeFila(Fila *fi);
int consultaFila(Fila *fi, struct aluno *al);