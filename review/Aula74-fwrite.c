#include <stdio.h>
#include <stdlib.h>

/*
 * int fwrite(void *buffer, int bytes, int count, FILE *fp)
 * 
 * Buffer: ponteiro generico para os dados
 * bytes: tamanho, em bytes de cada unidade de dado a ser gravada
 * count: total de unidades de dados que podem ser gravadas
 * fp: ponteiro para o arquivo
 * 
 * Retorno: Total de unidades de dados gravadas com sucesso
 */

int main()
{

  FILE *file;

  file = fopen("./Aula74.txt", "wb");

  if (file == NULL)
  {
    printf("Error to open file\n");
    exit(1);
  }

  int recorded, v[6] = {1, 2, 3, 4, 5, 6};

  recorded = fwrite(v, sizeof(int), 6, file);

  if (recorded != 6)
  {
    printf("Error to write in file\n");
    exit(1);
  }

  fclose(file);

  return 0;
}