#include <stdio.h>

// este codigo tambem estar funcionando sem o return.

float somacon(float num1, float num2)
{
  float soma;
  soma = num1 + num2;
  return soma;
}

float subcon(float numsub, float numsub2)
{
  float sub;
  sub = numsub - numsub2;
  return sub;
}

float mutcon(float nummut, float nummut2)
{
  float mut;
  mut = nummut * nummut2;
  return mut;
}

float divcon(float numdiv, float numdiv2)
{
  float div;
  div = numdiv / numdiv2;
  return div;
}

int main()
{

  float num1;
  float num2;

  /* float soma;
   float sub;
   float mut;
   float div;*/

  printf("primeiro numero: ");
  scanf("%f", &num1);

  printf("segundo numero: ");
  scanf("%f", &num2);

  // soma = num1 + num2;
  // sub = num1 + num2;

  printf("\n");
  printf("soma: %.1f\n", somacon(num1, num2));
  printf("\n");
  printf("subtracao: %.1f\n", subcon(num1, num2));
  printf("\n");
  printf("multiplicacao: %.1f\n", mutcon(num1, num2));
  printf("\n");
  printf("divicao: %.2f\n", divcon(num1, num2));
  printf("\n");

  return 0;
}