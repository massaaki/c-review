#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
   * A Linguagem C nos permite também criar nossos próprios tipos de variáveis.
   * Um deles é a struct, também chamada de Estrutura
   * 
   * Sintax:
   * struct nome_struct {
   *  tipo1 nome1;
   *  tipo2 nome2;
   *  ...
   *  tipoN nomeN;
   * }
  */

struct pessoa
{
  char nome[50], rua[50];
  int idade, numero;
};

int main()
{
  //declaraçaõ da variavel struct
  printf("STRUCT\n");
  struct pessoa p;

  p.idade = 31;
  printf("Informe um número:\n");
  scanf("%d", &p.numero);
  printf("Informa um nome:\n");
  scanf("%s", p.nome); // gets(p.nome);

  // p.numero += p.idade - 100; // expressão

  struct pessoa p2[4];
  p2[0].idade = 32;

  return 0;
}