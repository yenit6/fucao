#include <stdio.h>

void numero(int num[])
{
  int i;
  int qntpar = 0;
  int qntimpar = 0;

  for (i = 0; i < 6; i++)
  {
    if (num[i] % 2 == 0)
    {
      qntpar++;
    }
    else
    {
      qntimpar++;
    }
  }
  printf("par: %d\n", qntpar);
  printf("par: %d\n", qntimpar);
}

int main()
{
  int num[6];
  int i;

  for (i = 0; i < 6; i++)
  {
    printf("digite um numero: ");
    scanf("%d", &num[i]);
  }

numero(num);

  return 0;
}