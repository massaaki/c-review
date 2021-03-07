/*
 * gcc -c FilaDinamica.c -o FilaDinamica.o
 * gcc main.c FilaDinamica.o -o compilado && ./compilado
*/
#include "FilaDinamica.h"

int main()
{
  printf("Fila Dinamica\n");
  Fila *fi = criaFila();

  struct aluno al01 = {10, "Aluno01"};
  struct aluno al02 = {11, "Aluno02"};
  struct aluno al03 = {12, "Aluno03"};

  if (insereFila(fi, al01))
    printf("Inserido com sucesso\n");
  insereFila(fi, al02);
  insereFila(fi, al03);

  if (removeFila(fi))
    printf("Removido da fila..\n");

  printf("tamanho da fila..: %d\n", tamanhoFila(fi));

  LiberaFila(fi);
  printf("Compilado com sucesso!\n");
  return 0;
}