#include <stdio.h>

int main()
{

  int N, nmenores;
  double soma, media, percentualMenores;

  printf("Quantas pessoas serão digitadas: ");
  scanf("%d", &N);

  char nomes[N][50];
  int idades[N];
  double alturas[N];

  for (int i = 0; i < N; i++)
  {
    printf("Dados da %da pessoa: \n", i + 1);
    printf("Nome: ");
    fflush(stdin); // Limpa o buffer de entrada
    fgets(nomes[i], 50, stdin);
    printf("Idade: ");
    scanf("%d", &idades[i]);
    printf("Altura: ");
    scanf("%lf", &alturas[i]);
  }

  soma = 0;

  for (int i = 0; i < N; ++i)
  {
    soma = soma + alturas[i];
  }
  media = soma / N;
  printf("Altura média: %.2lf\n", media);
  nmenores = 0;

  for (int i = 0; i < N; ++i)
  {
    if (idades[i] < 16)
    {
      nmenores++;
    }
  }
  percentualMenores = (double)nmenores / N * 100.0;
  printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentualMenores);

  for (int i = 0; i < N; ++i)
  {
    if (idades[i] < 16)
    {
      printf("%s", nomes[i]);
    }
  }
  return 0;
}
