#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file = fopen("./Aula77.txt", "r");

  if (file == NULL)
  {
    printf("Error to open the file...\n");
    exit(1);
  }

  char text[20], name[20];
  int id;
  float h;

  fscanf(file, "%s %s", text, name);
  printf("%s %s\n", text, name);

  fscanf(file, "%s %d", text, &id);
  printf("%s %d\n", text, id);

  fscanf(file, "%s %f", text, &h);
  printf("%s %.1f\n", text, h);

  fclose(file);
  return 0;
}