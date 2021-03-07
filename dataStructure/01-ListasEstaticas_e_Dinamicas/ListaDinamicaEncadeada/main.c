#include "ListaDinEncad.h"
//Compilar
// gcc -c ListaDinEncad.c -o ListaDinEncad.o
// gcc main.c ListaDinEncad.o -o compilado && ./compilado
int main()
{
  Lista *li; //ponteiro para ponteiro - ele gaurda dentro dele o endereco de um ponteiro
  printf("Lista Dinamica Encadeada\n");

  li = criaLista(); //Cria uma lista fazia inicio->NULL

  struct aluno al1 = {10, "nome", 5, 7, 10};
  if (insereListaInicio(li, al1))
    printf("Aluno Inserido na lista no inicio\n");

  struct aluno al2 = {11, "nome2", 4, 6, 7};
  if (insereListaNoFinal(li, al2))
    printf("Aluno 2 Inserido no final\n");

  struct aluno al3 = {12, "nome3", 4, 6, 7};
  struct aluno al4 = {13, "nome4", 4, 6, 7};
  struct aluno al5 = {14, "nome5", 4, 6, 7};
  struct aluno al6 = {15, "nome6", 4, 6, 7};

  if (insereListaOrdenada(li, al3))
    printf("Inserido aluno 3...\n");
  if (insereListaOrdenada(li, al4))
    printf("Inserido aluno 4...\n");
  if (insereListaOrdenada(li, al5))
    printf("Inserido aluno 5...\n");
  if (insereListaOrdenada(li, al6))
    printf("Inserido aluno 6...\n");

  if (removeLista(li, 13))
  {
    printf("Removido mat=13 da lista\n");
  }

  int tamanho = tamanhoLista(li);
  printf("Tamanho da lista..: %d\n", tamanho);

  struct aluno alResponse;

  if (consultaListaPos(li, 3, &alResponse))
    printf("Aluno encontrado pela posicao 3..: %s\n", alResponse.nome);

  if (consultaListaMat(li, 14, &alResponse))
    printf("Aluno encontrado pela matricula 14..: %s\n", alResponse.nome);

  liberaLista(li);

  return 0;
}