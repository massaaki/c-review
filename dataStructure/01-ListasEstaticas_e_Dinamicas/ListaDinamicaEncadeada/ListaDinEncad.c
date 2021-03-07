#include "ListaDinEncad.h"

//cria o tipo de dados lista
//implementar as funcoes definidas no arquivo .h

struct elemento
{
  struct aluno dados;
  struct elemento *prox;
};

typedef struct elemento Elem;

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
  //verifica se a lista é valida
  if (li == NULL)
    return 0;

  int cont = 0;

  //faz o no apontar para o primeiro elemento da lista
  Elem *no = *li;

  //percorre todos elementos da lista
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
  { // se a lista for null
    return 1;
  }
  if (*li == NULL)
  { // se o contaudo for null
    return 1;
  }
  return 0; //lista nao esta vazia
}

int insereListaInicio(Lista *li, struct aluno al)
{
  //verifica se a lista é valida
  if (li == NULL)
    return 0;

  //Cria um novo elemento para a lista
  Elem *no = (Elem *)malloc(sizeof(Elem));

  //Verifica se foi possivel alocar memoria para o novo elemento
  if (no == NULL)
    return 0;

  no->dados = al;   //copia os dados que quer inserir
  no->prox = (*li); //o proximo é a propria lista
  *li = no;         //insere o no no primeiro elemento
  return 1;
}

int insereListaNoFinal(Lista *li, struct aluno al)
{
  //verifica se a lista é valida
  if (li == NULL)
    return 0;

  //Cria um novo elemento para a lista
  Elem *no = (Elem *)malloc(sizeof(Elem));

  //Verifica se foi possivel alocar memoria para o novo elemento
  if (no == NULL)
    return 0;

  no->dados = al;
  no->prox = NULL;

  if ((*li) == NULL) //Lista vazia: insere no inicio
  {
    *li = no;
  }
  else
  {
    //percorre ate encontrar o ultimo elemento (que aponta para null)
    Elem *aux = *li;
    while (aux->prox != NULL)
    {
      aux = aux->prox;
    }
    aux->prox = no;
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
    no->prox = (*li);
    *li = no;
    return 1;
  }
  else //caso contrario, procura onde inserir
  {
    Elem *ant, *atual = *li;

    while (atual != NULL && atual->dados.matricula < al.matricula)
    {
      ant = atual;
      atual = atual->prox;
    }

    if (atual == *li) //insere no inicio
    {
      no->prox = (*li);
      *li = no;
    }
    else
    {
      no->prox = ant->prox;
      ant->prox = no;
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

  Elem *no = *li; //elemento auxiliar que vai receber o inicio da lista
  *li = no->prox; //o inicio da lista passa a apontar para o elemento seguinte ao no auxiliar
  free(no);       //libera espaco do no auxiliar
  return 1;
}

int removeListaFinal(Lista *li)
{
  if (li == NULL)
    return 0;
  if ((*li) == NULL)
    return 0;

  Elem *ant, *no = *li;

  while (no->prox != NULL)
  {
    ant = no;
    no = no->prox;
  }

  if (no == (*li))
  {
    *li = no->prox;
  }
  else
  {
    ant->prox = no->prox;
  }
  free(no);
  return 1;
}

int removeLista(Lista *li, int mat)
{
  if (li == NULL)
    return 0;

  Elem *ant, *no = *li;

  while (no != NULL && no->dados.matricula != mat)
  {
    ant = no;
    no = no->prox;
  }

  if (no == NULL) //nao encontrado
    return 0;

  if (no == *li) //remove o primeiro
    *li = no->prox;
  else
    ant->prox = no->prox;

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
  {
    no = no->prox;
  }

  if (no == NULL)
    return 0;
  else
  {
    *al = no->dados;
    return 1;
  }
}