#include <stdio.h>
#include <stdlib.h>

int main()
{
  //Ponteiro generico - aponta para qualquer endereco de memoria
  // void *pp;
  // int *p1, p2 = 10;
  // p1 = &p2;
  // pp = &p2;
  // printf("Endereco em pp: %p \n", pp);
  // pp = &p1; //endereco de int *
  // printf("Endereco em pp: %p \n", pp);
  // pp = p1; //endereco de int
  // printf("endereco em pp: %p \n", pp);

  int vet[5] = {1, 2, 3, 4, 5};
  int *p = vet;

  int i;
  for (i = 0; i < 5; i++)
  {
    printf("[%p]: %d\n", &p[i], p[i]);
  }

  return 0;
}