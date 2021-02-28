#include <stdio.h>
#include <stdlib.h>
/*
 * int fseek(FILE *fp, long numbytes, int origin) 
 * 
 * fp: ponteiro para o arquivo
 * numbytes: total de bytes a ser pulado a partir da origem
 * origin: a parti de onde os numbytes serao contados
 * 
 * retorna Zero em caso de sucesso
 * 
 * 
 * Os valores possiveis para o parametro "origem" sao definidos por constante na biblioteca stdio.h
 * SEEK_SET: valor=0 = inicio do arquivo
 * SEEK_CUR: valor=1 = ponto atual no arquivo
 * SEEK_END: valor=2 = fim do arquivo
 * 
 * Outra opção de movimentação dentro do arquivo é retornar para o seu inicio
 * para isso utilizamos o rewind(), para nao precise ficar abrindo e fechando o arquivo novamente
 * sintaxe:
 * void(rewind(FILE *fp))
 * 
*/

struct user
{
  char name[20], address[20];
  int age;
};

int main()
{
  FILE *file;

  //Criando ou substituindo o arquivo e cadastrando um user
  file = fopen("./Aula79.txt", "wb");

  if (file == NULL)
  {
    printf("Error to open the file...\n");
    exit(1);
  }

  struct user reg[4] = {"user1", "address1", 10, "user2", "address2", 20, "user3", "address3", 30, "user4", "address4", 40};
  fwrite(reg, sizeof(struct user), 4, file);

  fclose(file);

  //buscando um elemento em uma posição especifica
  file = fopen("./Aula79.txt", "rb");
  if (file == NULL)
  {
    exit(1);
  }
  struct user u;

  fseek(file, 2 * sizeof(struct user), SEEK_SET);
  fread(&u, sizeof(struct user), 1, file);

  printf("%s\n%s\n%d\n", u.name, u.address, u.age);

  fclose(file);
  return 0;
}