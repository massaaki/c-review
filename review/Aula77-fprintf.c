#include <stdio.h>
#include <stdlib.h>

/*
 * Sintaxe:
 * fprintf(FILE *F, "tipos de saida", variaveis);
 */
int main()
{
  char name[20] = "some name";
  int age = 10;
  float h = 1.74;

  FILE *file = fopen("Aula77.txt", "w");

  if (file == NULL)
  {
    printf("Error to open the file!\n");
    exit(1);
  }

  printf("Nome: %s \nIdade: %d \nAltura: %f\n", name, age, h);
  fprintf(file, "Nome: %s\nIdade:%d\nAltura:%f\n", name, age, h);

  fclose(file);

  return 0;
}