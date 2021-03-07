#include "FilaDinamica.h"

struct fila
{
  struct elemento *inicio;
  struct elemento *final;
};

struct elemento
{
  struct aluno dados;
  struct elemento *prox;
};

typedef struct elemento Elem;

Fila *criaFila()
{
  Fila *fi = (Fila *)malloc(sizeof(Fila));
  if (fi != NULL)
  {
    fi->final = NULL;
    fi->inicio = NULL;
  }
  return fi;
}

void LiberaFila(Fila *fi)
{
  if (fi != NULL)
  {
    Elem *no;
    while (fi->inicio != NULL)
    {
      no = fi->inicio;
      fi->inicio = fi->inicio->prox;
      free(no);
    }
    free(fi);
  }
}

int tamanhoFila(Fila *fi)
{
  if (fi == NULL)
    return 0;
  int cont = 0;
  Elem *no = fi->inicio;
  while (no != NULL)
  {
    cont++;
    no = no->prox;
  }
  return cont;
}

int filaCheia(Fila *fi)
{
  return 0;
}

int filaVazia(Fila *fi)
{
  if (fi == NULL)
    return 1;
  if (fi->inicio == NULL)
    return 1;
  return 0;
}

int insereFila(Fila *fi, struct aluno al)
{
  if (fi == NULL)
    return 0;

  Elem *no = (Elem *)malloc(sizeof(Elem));

  if (no == NULL)
    return 0;

  if (fi->final == NULL) //lista vazia
    fi->inicio = no;
  else
    fi->final->prox = no;
  fi->final = no;
  return 1;
}

int removeFila(Fila *fi)
{
  if (fi == NULL)
    return 0;
  if (fi->inicio == NULL)
    return 0;

  Elem *no = fi->inicio;
  fi->inicio = fi->inicio->prox;
  if (fi->inicio == NULL) //fila ficou vazia
    fi->final = NULL;
  free(no);
  return 1;
}

int consultaFila(Fila *fi, struct aluno *al)
{
  if (fi == NULL)
    return 0;
  if (filaVazia(fi))
    return 0;

  *al = fi->inicio->dados;
  return 1;
}