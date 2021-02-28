#include <stdio.h>
#include <stdlib.h>

/*
 * Toda a informação que digitamos no tecçado é armazenada em um buffer e fica disponível para nossa utilização
 * 
 * Quando usamos a função scanf(), ela recupera a informação do buffer. Porém ela pode deixar "sugeira" no buffer, comprometendo futuras leituras.
 * 
 * Existem muitas formas de limpar o buffer do teclado.
 * 
 * setbuff(stdin, NULL) // coloca NULL no buffer do teclado
 * 
 * *Nao utilize NULL no buffer do teclado
 * fflush(stdin); //esta função server para limpar o buffer, porém tem comportamento "indefinido" para o buffer do teclado
 */

int main()
{

  char ch;
  int i;

  for (i = 0; i < 5; i++)
  {
    printf("Digite o %d caracter:", i);
    scanf("%c", &ch);

    // setbuf(stdin, NULL);
    fflush(stdin);
  }
  return 0;
}