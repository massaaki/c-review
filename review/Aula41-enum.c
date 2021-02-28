#include <stdio.h>
#include <stdlib.h>

/*
 * Enum
 * Sintax:
 * enum nomeEnum { lista de identificadores };
 */

enum semana
{
  Domingo,
  Segunda,
  Terca,
  Quarta,
  Quinta,
  Sexta,
  Sabado
};

int main()
{
  enum semana s;

  s = Terca;
  printf("valor = %d \n", s);

  return 0;
}