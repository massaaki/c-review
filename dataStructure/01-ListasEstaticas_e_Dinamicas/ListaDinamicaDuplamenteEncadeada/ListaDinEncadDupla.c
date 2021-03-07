#include "ListaDinEncadDupla.h"

struct elemento
{
  struct elemento *ant;
  struct aluno dados;
  struct elemento *prox;
};

typedef struct elemento Elem;

// *li = inicio -> NULL
Lista *criaLista()
{
  Lista *li = (Lista *)malloc(sizeof(Lista));
  if (li == NULL)
    *li = NULL;
  return li;
}

void liberaLista(Lista *li)
{
  if (li != NULL)
  {
    Elem *no;
    while ((*li) != NULL) //enquanto nao estiver em uma lista vazia
    {
      no = *li;          //no recebe recebe o end. lista
      *li = (*li)->prox; // a lista vai apontar para o proximo elemento da lista
      free(no);          //libera o no atual
    }
    free(li);
  }
}

int tamanhoLista(Lista *li)
{
  if (li == NULL)
    return 0;
  int cont = 0;
  Elem *no = *li;

  while (no != NULL)
  {
    cont++;
    no = no->prox;
  }

  return cont;
}

int listaCheia(Lista *li)
{
  return 0;
}

int listaVazia(Lista *li)
{
  if (li == NULL)
    return 1;
  if (*li == NULL)
    return 1;
  return 0;
}

int insereListaInicio(Lista *li, struct aluno al)
{
  if (li == NULL)
    return 0;
  Elem *no = (Elem *)malloc(sizeof(Elem));
  if (no == NULL)
    return 0;

  no->dados = al;
  no->prox = (*li);
  no->ant = NULL;

  if (*li != NULL)
  {
    (*li)->ant = no;
  }
  *li = no;
  return 1;
}

int insereListaFinal(Lista *li, struct aluno al)
{
  if (li == NULL)
    return 0;

  Elem *no = (Elem *)malloc(sizeof(Elem));
  if (no == NULL)
    return 0;

  no->dados = al;
  no->prox = NULL;

  if ((*li) == NULL) // Lista vazia, insere no inicio
  {
    no->ant = NULL;
    *li = no;
  }
  else
  {
    Elem *aux = *li;
    while (aux->prox != NULL)
      aux = aux->prox;
    aux->prox = no;
    no->ant = aux;
  }
  return 1;
}

int insereListaOrdenada(Lista *li, struct aluno al)
{
  if (li == NULL)
    return 0;

  Elem *no = (Elem *)malloc(sizeof(Elem));

  if (no == NULL)
    return 0;

  no->dados = al;
  if (listaVazia(li)) //insere no inicio
  {
    no->prox = NULL;
    no->ant = NULL;
    *li = no;
    return 1;
  }
  else //procura onde inserir
  {
    Elem *ante, *atual = *li;

    while (atual != NULL && atual->dados.matricula < al.matricula)
    {
      ante = atual;
      atual = atual->prox;
    }
    if (atual == *li) //insere no inicio
    {
      no->ant = NULL;
      no->prox = (*li);
      *li = no;
    }
    else
    {
      no->prox = ante->prox;
      no->ant = ante;
      ante->prox = no;
      if (atual != NULL)
        atual->ant = no;
    }
    return 1;
  }
}

int removeListaInicio(Lista *li)
{
  if (li == NULL)
    return 0;

  if ((*li) == NULL)
    return 0;

  Elem *no = *li;
  *li = no->prox;

  if (no->prox != NULL)
    no->prox->ant = NULL;
  free(no);
  return 1;
}

int removeListaFinal(Lista *li)
{
  if (li == NULL)
    return 0;

  if ((*li) == NULL)
    return 0;

  Elem *no = *li;

  while (no->prox != NULL)
    no = no->prox;

  if (no->ant == NULL) //remover o primeiro único
    *li = no->prox;
  else
    no->ant->prox = NULL;

  free(no);
  return 1;
}

int removeLista(Lista *li, int mat)
{
  if (li == NULL)
    return 0;
  Elem *no = *li;

  while (no != NULL && no->dados.matricula != mat)
    no = no->prox;

  if (no == NULL) //nao encontrado
    return 0;

  if (no->ant == NULL) //remover o primeiro
    *li = no->prox;
  else
    no->ant->prox = no->prox;
  if (no->prox != NULL)
    no->prox->ant = no->ant;
  free(no);
  return 1;
}

int consultaListaPos(Lista *li, int pos, struct aluno *al)
{
  if (li == NULL || pos <= 0)
    return 0;

  Elem *no = *li;
  int i = 1;
  while (no != NULL && i < pos)
  {
    no = no->prox;
    i++;
  }

  if (no == NULL)
    return 0;
  else
  {
    *al = no->dados;
    return 1;
  }
}
int consultaListaMat(Lista *li, int mat, struct aluno *al)
{
  if (li == NULL)
    return 0;

  Elem *no = *li;

  while (no != NULL && no->dados.matricula != mat)
    no = no->prox;

  if (no == NULL)
    return 0;
  else
  {
    *al = no->dados;
    return 1;
  }
}