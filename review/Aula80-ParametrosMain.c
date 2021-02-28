#include <stdio.h>
#include <stdlib.h>

/*
 * int argc: valor que indica o número de parâmetros com os quais a função main() foi chamada (argc >=1)
 * 
 * char *argv[]: Ponteiro para um vetor contendo "argc" strings.
 * Cada string é um dos parâmetros para main().
 * 
 * argv[0] sempre aponta para o nome do programa
 */
int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    printf("Programa %s sem parametros\n", argv[0]);
  }
  else
  {
    int i;
    printf("Parametros do programa %s\n", argv[0]);
    for (i = 1; i < argc; i++)
    {
      printf("Parametro %d: %s \n", i, argv[i]);
    }
    printf("\n");
  }
  return 0;
}