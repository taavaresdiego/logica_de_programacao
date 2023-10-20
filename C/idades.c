#include <stdio.h>

#include <math.h>
int main()
{

  char nome1[20], nome2[20];
  int idade1, idade2;
  double media_idade;

  printf("Digite o nome da primeira pessoa: \n ");
  printf("Nome: ");
  gets(nome1);
  printf("Idade: ");
  scanf("%d", &idade1);

  printf("Digite o nome da segunda pessoa: \n ");
  printf("Nome: ");
  fseek(stdin, 0, SEEK_END);
  gets(nome2);
  printf("Idade: ");
  scanf("%d", &idade2);

  media_idade = (double)(idade1 + idade2) / 2.0;

  printf("A idade media de %s e %s eh de %.1lf anos", nome1, nome2, media_idade);

  return 0;
}
