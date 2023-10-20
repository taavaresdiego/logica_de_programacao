#include <stdio.h>

#include <math.h>
int main()
{

  double base, altura, area, perimetro, diagonal;

  printf("Digite a base do retangulo: ");
  scanf("%lf", &base);
  printf("Digite a altura do retangulo: ");
  scanf("%lf", &altura);

  area = base * altura;
  perimetro = 2 * (base + altura);
  diagonal = sqrt(pow(base, 2) + pow(altura, 2));

  printf("Area: %.2lf\n", area);
  printf("Perimetro: %.2lf\n", perimetro);
  printf("Diagonal: %.2lf\n", diagonal);

  return 0;
}
