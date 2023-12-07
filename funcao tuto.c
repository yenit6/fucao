#include <stdio.h>
#include <stdlib.h>

void bah()
{
  fflush(stdin);
  system("clear || cls");
}
 
void Dados(int idade, char nome[200])
{

  printf("nome: %s\n", nome);
  printf("idade: %d\n", idade);
}

int somar(int n1, int n2)
{
  int resultado;
  resultado = n1 + n2;

  return resultado;
}

int main()
{

  char nome[200];
  int idade;

  int primeroN;
  int segundoN;
  int soma;

  printf("digite um nome: ");
  gets(nome);

  printf("digite uma idade: ");
  scanf("%d", &idade);

  printf("digite o primeiro num: ");
  scanf("%d", &primeroN);
  printf("digite o segundo num: ");
  scanf("%d", &segundoN);

  soma = somar(primeroN, segundoN);

  bah();

  Dados(idade, nome);
  printf("soma: %d\n", soma);

  /*printf("nome: %s\n", nome);
  printf("idade: %d", idade);*/

  return 0;
}