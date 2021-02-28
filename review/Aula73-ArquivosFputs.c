#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Para escrever uma string em um arquivo usamos a função fputs()
 * 
 * sintaxe:
 * int fputs(char *str, FILE *fp)
 * 
 * retorna:
 * em caso de erro: a constante EOF
 * em caso de sucess: um valor diferente de zero
 * 
 * 
 * Para Ler uma string em um arquivo usamos a função fgets()
 * 
 * sintaxe:
 * char* fgets(char *str, int tamanho, FILE *FP);
 * 
 */
int main()
{
  FILE *f;

  // Escrita de string
  f = fopen("./Aula73.txt", "w");
  if (f == NULL)
  {
    printf("Erro na abertura\n");
    exit(1);
  }
  char texto[20] = "Hello World";

  int retorno = fputs(texto, f);
  if (retorno == EOF)
  {
    printf("Erro na gravação\n");
  }

  fclose(f);

  // Leitura de string
  f = fopen("./Aula73.txt", "r");
  if (f == NULL)
  {
    printf("Erro na abertura\n");
    exit(1);
  }

  char str[20];
  char *result = fgets(str, 12, f); //lê 11 chars

  if (result == NULL)
  {
    printf("Erro na leitura\n");
  }
  else
  {
    printf("%s\n", str);
  }
  fclose(f);

  return 0;
}