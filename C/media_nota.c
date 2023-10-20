#include <stdio.h>

#include <math.h>
int main()
{

  double nota1, nota2, media;
  printf("Digite a primeira nota: ");
  scanf("%lf", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%lf", &nota2);

  media = (double)(nota1 + nota2) / 2;

  printf("A media do aluno foi: %.2lf\n", media);

  if (media >= 7.0)
  {
    printf("O aluno foi aprovado!\n");
  }
  else if (media >= 5.0)
  {
    printf("O aluno esta de recuperacao!\n");
  }
  else
  {
    printf("O aluno foi reprovado!\n");
  };

  return 0;
}
