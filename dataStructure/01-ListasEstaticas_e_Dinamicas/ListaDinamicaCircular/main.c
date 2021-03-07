#include "ListaDinEncadCirc.h"

//gcc -c ListaDinEncadCirc.c -o ListaDinEncadCirc.o
//gcc main.c ListaDinEncadCirc.o -o compilado && ./compilado
int main()
{
  printf("Lista Dinamica Encadeada Circular\n");

  Lista *li = criaLista();

  struct aluno al1 = {10, "nome", 5, 6, 7};
  if (insereListaInicio(li, al1))
    printf("Inserido aluno");

  struct aluno al2 = {11, "nome2", 5, 6, 7};
  struct aluno al3 = {12, "nome3", 5, 6, 7};
  struct aluno al4 = {13, "nome4", 5, 6, 7};
  insereListaOrdenada(li, al2);
  insereListaOrdenada(li, al3);
  insereListaOrdenada(li, al4);

  printf("Tamanho da lista: %d\n", tamanhoLista(li));
  liberaLista(li);
  printf("Compilado com sucesso!\n");

  return 0;
}