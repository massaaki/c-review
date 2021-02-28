#include <stdio.h>
#include <stdlib.h>

/*
 *  int fread(void *buffer, int bytes, int count, FILE *fp)
 */

int main()
{
  FILE *file = fopen("./Aula74.txt", "rb");

  if (file == NULL)
  {
    printf("Error to open file\n");
    exit(1);
  }

  int totalRead, v[6];
  totalRead = fread(v, sizeof(int), 6, file);

  if (totalRead != 6)
  {
    printf("Error to read the file\n");
    exit(1);
  }

  fclose(file);

  int i;
  for (i = 0; i < 6; i++)
  {
    printf("%d\n", v[i]);
  }

  printf("concluded!\n");

  return 0;
}