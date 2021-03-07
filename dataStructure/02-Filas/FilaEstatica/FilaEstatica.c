#include "FilaEstatica.h"

struct fila
{
  int inicio, final, qtd;
  struct aluno dados[MAX];
};

Fila *criaFila()
{
  Fila *fi = (Fila *)malloc(sizeof(struct fila));
  if (fi != NULL)
  {
    fi->inicio = 0;
    fi->final = 0;
    fi->qtd = 0;
  }
  return fi;
}

void liberaFila(Fila *fi)
{
  free(fi);
}

int tamanhoFila(Fila *fi)
{
  if (fi == NULL)
    return -1;

  return fi->qtd;
}

int filaCheia(Fila *fi)
{
  if (fi == NULL)
    return -1;

  if (fi->qtd == MAX)
    return 1;
  else
    return 0;
}

int filaVazia(Fila *fi)
{
  if (fi == NULL)
    return -1;
  if (fi->qtd == 0)
    return 1;
  else
    return 0;
}

int inserefila(Fila *fi, struct aluno al)
{
  if (fi == NULL)
    return 0;
  if (filaCheia(fi))
    return 0;

  fi->dados[fi->final] = al;
  fi->final = (fi->final + 1) % MAX;

  fi->qtd++;
  printf("fi->final.: %d\n", fi->final);
  return 1;
}

int removeFila(Fila *fi)
{
  if (fi == NULL || filaVazia(fi))
    return 0;

  /*
   * fi->inicio++;
   * if(fi->inicio == MAX)
   *    fi->inicio == 0; 
   */
  fi->inicio = (fi->inicio + 1) % MAX;

  fi->qtd--;
  return 1;
}

int consultaFila(Fila *fi, struct aluno *al)
{
  if (fi == NULL || filaVazia(fi))
    return 0;

  *al = fi->dados[fi->inicio];
  return 1;
}