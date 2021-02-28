#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
   * Arquivos: biblioteca stdio.h
   * A linguagem C usa um tipo especial de ponteiro para manipular arquivos
   * Sintaxe:
   * FILE *nome_ponteiro
   * 
   * A linguagem C trabalha com apenas dois tipos de arquivos:
   *  -Arquvos de txto: podem ser editados no bloco de notas
   *  -Arquivos binarios: NÃO podem ser editados no bloco de notas (utilizando a tabela ASC)
   * 
   * Abertura de arquivo
   * FILE *fopen(char *nome, char *modo)
   * Exemplo
   * f = fopen("arquivo.txt", "w")
   * 
   * Fechar arquivo: Retorna ZERO no caso de sucesso no fechamento de arquivo
   * int fclose(FILE *f);
   * 
   * Modos de abertura:
   * r(text): leitura
   * w(text): escrita, apaga anterior caso exista
   * a(text): escrita, dados adicionados ao fim do arquivo
   * rb(bin): leitura binaria
   * wb(bin): escrita binaria, paga caso exista e cria caso não exista
   * ab(bin): escrita, dados adicionados ao fim do arquivo
   * r+(text): Leitura/Escrita. O Arquivo de existir e pode ser motificado
   * w+(text): leitura/escrita. Cria o arquvio se não ouver. Apaga anterior se existir
   * a+(text): leitura/escrita. Os dados serao adicionados no fim do arquivo("append")
   * r+b(bin): leitura/escrita. O Arquivo deve existir e pode ser motificado
   * w+b(bin): leitura/escrita. Cria arquivo se nao houver. apaga o anterior se ele existir
   * a+b(bin): leitura/escrita. Os dados serao adicionados no fim do arquivo("append")
   * 
   * 
   * Escrever um char em um arquivo
   * int putc(char c, FILE *fp);
   * Retorno: 
   * Erro; EOF
   * Sucesso: O proprio caractere
   * 
   * int efof(FILE *fp)
   * retorna zero se ainda não estiver no final do arquivo
   * Exemplo:
   * 
   * 
   */

int main()
{
  FILE *f;

  //FPUTC: Escrita de Char em um arquivo
  // f = fopen("./Aula66-arquivo.txt", "w");

  // if (f == NULL)
  // {
  //   printf("Erro na abertura \n");
  //   exit(1);
  // }

  // char texto[20] = "Hello world";
  // int i;
  // for (i = 0; i < strlen(texto); i++)
  // {
  //   fputc(texto[i], f);
  // }

  // fclose(f);

  //FGETC: Leitura de um arquivo
  f = fopen("./Aula66-arquivo.txt", "r");
  if (f == NULL)
  {
    printf("Erro na abertura");
    exit(1);
  }
  char c;
  int i;

  // for (i = 1; i <= 11; i++)
  // {
  //   c = fgetc(f);
  //   printf("%c", c);
  // }
  // printf("\n");

  c = fgetc(f);
  while (c != EOF) // para ler todo o arquivo
  {
    printf("%c", c);
    c = fgetc(f);
  }
  printf("\n");

  fclose(f);
  return 0;
}