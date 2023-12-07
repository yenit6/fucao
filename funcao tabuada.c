#include <stdio.h>

void tabudada(int num23)
{

  int I;

  for (I = 1; I < 11; I++)
  {
    printf("%d x %d = %d\n", num23, I, num23 * I);
  }


}

int main()
{

  int num;

  printf("Digite um numero para multiplicao: ");
  scanf("%d", &num);

  tabudada(num);

  return 0;
}