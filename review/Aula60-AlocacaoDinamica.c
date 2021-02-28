#include <stdio.h>
#include <stdlib.h>

/*
 * A Linguagem C ANSI usa apenas 4 funções para alocação dinâmica, disponiveis na bibliteca stdlib.h
 * malloc
 * calloc
 * realloc
 * free
 * 
 * operador:
 * sizeof
 *  char: 1 byte
 *  int: 4 bytes
 *  float: 4 bytes
 *  double 8 bytes
*/
struct ponto
{
  int x, y;
};

int main()
{
  printf("\n******** TAMANHO DOS TIPOS\n");
  printf("char: %ld bytes \n", sizeof(char));
  printf("int: %ld bytes\n", sizeof(int));
  printf("float: %ld bytes\n", sizeof(float));
  printf("double: %ld bytes\n", sizeof(double));
  printf("ponto: %ld bytes\n", sizeof(struct ponto));
  printf("***************************\n\n");

  /*
   * Malloc(tamEmBytes) recebe por parametro a quantidade bytes a ser alocada e retorna 
   * NULL: caso de erro
   * ponteiro para a primeiora posição do array
  */

  // int *p;
  // p = (int *)malloc(5 * sizeof(int));

  // if (p == NULL)
  // {
  //   printf("errro: Sem memoria!\n");
  //   exit(1);
  // }

  // int i;
  // for (i = 0; i < 5; i++)
  // {
  //   printf("digite p[%d]..:", i);
  //   scanf("%d", &p[i]);
  // }

  // printf("Valores digitados:\n");
  // for (i = 0; i < 5; i++)
  // {
  //   printf("p[%p]: %d\n", &p[i], p[i]);
  // }

  /*
   * Calloc(quantidade ,tamByte): Serve para alocar memoria durante a execução do programa. Ela faz o pedido de memoria ao computador e retorna um ponteiro com o medereco do inciio do espaco de memoria alocado.
   */

  // int *p;
  // p = (int *)calloc(5, sizeof(int));

  // if (p == NULL)
  // {
  //   printf("Erro: sem memoria!\n");
  //   exit(1);
  // }
  // int i;
  // for (i = 0; i < 5; i++)
  // {
  //   printf("digite p[%d]..:", i);
  //   scanf("%d", &p[i]);
  // }

  // printf("Numeros informados..:\n");
  // for (i = 0; i < 5; i++)
  // {
  //   printf("p[%p]: %d\n", &p[i], p[i]);
  // }

  // free(p);

  /*
   * realloc() : alocar ou realocar memoria durante a execução do programa
   * Ela faz o pedido de memoria ao computador e retorna um ponteiro com o endereço do inicio do espaco de memoria alocado.
   */

  return 0;
}