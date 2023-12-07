#include <stdio.h>
#include <stdlib.h>

float somar(float N1, float N2)
{
  int resultado;
  resultado = (N1 + N2) / 2;

  return resultado;
}

int main()
{

  float num1;
  float num2;
  float soma;

  printf("digite o primeiro numero: ");
  scanf("%f", &num1);

  printf("digite o segundo numero: ");
  scanf("%f", &num2);

  soma = num1 + num2;

  system("clear || cls");

  printf("primeiro num: %d\n", num1);
  printf("segundo num:  %d\n", num2);
  printf("soma: %d\n", soma);
  printf("media: %.1f", somar(num1, num2));

  return 0;
}