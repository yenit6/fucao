#include <stdio.h>

void par(int num)
{

  if (num % 2 == 0)
  {
    printf("%d numero e par", num);
  }
  else
  {

    printf("%d numero e imppar", num);
  }
}
int main()
{

  int nu;

  printf("digite um numero: ");
  scanf("%d", &nu);

  par(nu);

  return 0;
}
