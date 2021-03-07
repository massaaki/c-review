#include "ListaSequencial.h"

//Compilar
// gcc -c ListaSequencial.c -o ListaSequencial.o
// gcc main.c ListaSequencial.o -o compilado && ./compilado

int main()
{
  printf("TAD - Tipo Abstrato de dados \n");
  Lista *li = cria_lista();

  struct aluno al = {10, "Name", 5, 10, 8};
  int alunoInserido = insere_lista_final(li, al);

  int x = tamanho_lista(li);
  printf("Tamanho da lista: %d\n", x);

  struct aluno al_consulta;
  int consulta_al = consulta_lista_mat(li, 10, &al_consulta);
  printf("(%d)::aluno[mat=10]: %s\n", consulta_al, al_consulta.nome);

  libera_lista(li);

  return 0;
}