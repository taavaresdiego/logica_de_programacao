#include <stdio.h>

int main()
{

  int N;
  double soma, media;

  printf("Quantos numeros voce vai digitar? ");
  scanf("%d", &N);

  double vet[N];

  for (int i = 0; i < N; i++)
  {
    printf("Digite um número: ");
    scanf("%lf", &vet[i]);
  }

  printf("\nVALORES: ");
  for (int i = 0; i < N; ++i)
  {
    printf("%.1lf ", vet[i]);
  }
  printf("\n");

  soma = 0;

  for (int i = 0; i < N; ++i)
  {
    soma = soma + vet[i];
  }

  printf("SOMA = %.2lf\n", soma);

  media = soma / N;
  printf("MÉDIA = %.2lf\n", media);
  return 0;
}
