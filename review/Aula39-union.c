#include <stdio.h>
#include <stdlib.h>

/*
 * Union
 * Nos permite criar nossos proprios tipos de variáveis
 * identico ao struct, porém compartilha a mesma memoria, ou seja, gasta menos menoria, assim é recomentado utilizar quando temos uma estrutura onde as variaveis nao são chamas ao mesmo tempo
 * Sintaxe:
 * union nome_union {
 *  tipo1 nome1;
 *  tipo2 nome2;
 *  ...
 *  tipoN nomeN;
 * };
*/

union tipo
{
  short int x;
  unsigned char c;
};

int main()
{

  return 0;
}