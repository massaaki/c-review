#include <stdio.h>
#include <stdlib.h>

/*
 * Typedef: Permite que o programador defina um "apelido" para um tipo existente
 * Sintax:
 * typedef tipo_existente novo_nome;
 */

struct cadastro
{
  char nome[50], rua[50];
  int idade, numero;
};

typedef int inteiro;
typedef struct cadastro cad;
int main()
{
  cad c2;
  int x = 10;
  inteiro y = 20;

  c2.idade = 10;

  y = y + x;

  printf("%d", x + y);
  return 0;
}