#include <stdio.h>

#define a 6

int bruh(int num[])
{
  int par = 0;
  int i;

  for (i = 0; i < a; i++)
  {

    if (num[i] % 2 == 0)
    {
      par++;
    }
  }

  return par;
}

int brah(int num[])
{
  int impar= 0;
  int i;

  for (i = 0; i < a; i++)
  {

    if (num[i] % 2 != 0)
    {
      impar++;
    }
  }

  return impar;
}

int main()
{

  int num[a];
  int i;
  int par;
  int impar;

  for (i = 0; i < a; i++)
  {
    printf("digite um numero: ");
    scanf("%d", &num[i]);
  }

  par = bruh(num);
  impar = brah(num);

  printf("par: %d\n", par);
  printf("impar: %d\n", impar);

  return 0;
}
