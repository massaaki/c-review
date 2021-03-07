#include "ListaDinEncadDupla.h"
//gcc -c ListaDinEncadDupla.c -o ListaDinEncadDupla.o
//gcc main.c ListaDinEncadDupla.o -o compilado && ./compilado
int main()
{
  printf("Lista Dinamica Duplamente Encadeada\n");
  Lista *li = criaLista();

  struct aluno aluno1 = {10, "nome", 5, 6, 10};
  if (insereListaInicio(li, aluno1))
    printf("Inserido aluno1 no início...\n");

  struct aluno alunoFinal = {50, "nome50", 5, 6, 10};
  if (insereListaFinal(li, alunoFinal))
    printf("Inserido aluno50 no final...\n");

  struct aluno aluno2 = {11, "nome2", 5, 6, 10};
  struct aluno aluno3 = {12, "nome3", 5, 6, 20};
  struct aluno aluno4 = {13, "nome4", 5, 6, 10};
  struct aluno aluno5 = {14, "nome5", 5, 6, 10};

  insereListaOrdenada(li, aluno2);
  insereListaOrdenada(li, aluno3);
  insereListaOrdenada(li, aluno4);
  insereListaOrdenada(li, aluno5);

  if (removeLista(li, 13))
    printf("Removido Aluno Mat13 com sucesso!\n");

  struct aluno alBusca;
  if (consultaListaPos(li, 2, &alBusca))
    printf("Aluno encontrado..: %s\n", alBusca.nome);

  if (consultaListaMat(li, 12, &alBusca))
    printf("Aluno encontrado, matricula: %d..: %s\n", alBusca.matricula, alBusca.nome);

  printf("Tamanho da lista..: %d\n", tamanhoLista(li));

  liberaLista(li);
  printf("Compilado com sucesso!\n");
  return 0;
}