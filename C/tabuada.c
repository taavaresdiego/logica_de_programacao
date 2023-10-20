#include <stdio.h>

int main()
{

  int N, i, produto;

  printf("Deseja fazer tabuada de qual numero? ");

  scanf("%d", &N);

  for (i = 1; i <= 10; i++)
  {
    produto = N * i;
    printf("%d x %d = %d\n", N, i, produto);
  }

  return 0;
}
