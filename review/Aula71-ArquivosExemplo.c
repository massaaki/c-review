#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
 * Descrição do problema:
 * Ler um arquivo contendo um texto em minúsculo e criar outro arquivo com o texto em maiúsculo
 */
int main()
{
  FILE *f1, *f2;
  f1 = fopen("./Aula71-ArquivosExemploInput.txt", "r");
  f2 = fopen("./Aula71-ArquivosExemploOutput.txt", "w");

  if (f1 == NULL || f2 == NULL)
  {
    printf("Erro na abertura \n");
    exit(1);
  }

  char c = fgetc(f1);

  // while (c != EOF)
  while (!feof(f1))
  {
    fputc(toupper(c), f2);
    c = fgetc(f1);
  }

  return 0;
}