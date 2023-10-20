#include <stdio.h>

int main()
{

  int X, Y, crescente, decrecente, i;

  printf("Digite dois numeros:\n ");
  scanf("%d %d", &X, &Y);

  while (X != Y)
  {
    if (X < Y)
    {
      printf("Crescente\n");
    }
    else
    {
      printf("Decrescente\n");
    }
    printf("Digite dois numeros:\n ");
    scanf("%d %d", &X, &Y);
  }
  return 0;
}
