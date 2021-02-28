#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
  if (n == 0)
  {
    return 1;
    printf("%d (n==0)\n", n);
  }
  else
  {
    printf("%d (else)\n", n);
    return n * fatorial(n - 1);
  }
}

int main()
{
  int x = fatorial(5);
  printf("Fatorial de 5 ..: %d\n", x);
  return 1;
}