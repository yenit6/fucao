#include <stdio.h>

float bruh(float valor)
{
  float inflacao;
  float valorAcres;

  if (valor >= 200)
  {

    inflacao = valor * 0.2;
    valorAcres = valor + inflacao;
  }
  else
  {
    inflacao = valor * 0.1;
    valorAcres = valor + inflacao;
  }

  return valorAcres;
}

int main()
{

  float valor;

  printf("digite um valor: ");
  scanf("%f", &valor);

  printf("valor inflaconado: R$ %.2f\n", bruh(valor));

  return 0;
}