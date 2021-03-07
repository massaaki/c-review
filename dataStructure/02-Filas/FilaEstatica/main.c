#include "FilaEstatica.h"

/*
 * gcc -c FilaEstatica.c -o FilaEstatica.o
 * gcc main.c FilaEstatica.o -o compilado && ./compilado
*/

int main()
{
  printf("Fila Estática\n");

  Fila *fi = criaFila();
  struct aluno dadosAluno01 = {10, "Aluno1"};
  struct aluno dadosAluno02 = {11, "Aluno2"};
  struct aluno dadosAluno03 = {12, "Aluno3"};
  struct aluno dadosAluno04 = {13, "Aluno4"};

  if (inserefila(fi, dadosAluno01))
    printf("[%d]%s\n", dadosAluno01.matricula, dadosAluno01.nome);

  inserefila(fi, dadosAluno02);
  inserefila(fi, dadosAluno03);
  inserefila(fi, dadosAluno04);

  if (removeFila(fi))
    printf("Removido da fila...\n");

  struct aluno dadosConsulta;
  if (consultaFila(fi, &dadosConsulta))
  {
    printf("O primeiro aluno da fila: %s\n", dadosConsulta.nome);
  }

  printf("Tamanho da fila..: %d\n", tamanhoFila(fi));
  liberaFila(fi);
  printf("Compilado com sucesso!\n");
  return 0;
}
