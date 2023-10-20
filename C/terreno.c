#include <stdio.h>

#include <math.h>
int main()
{

  double largura, comprimento, valor, area, perimetro;
  printf("Digite a largura do terreno: ");
  scanf("%lf", &largura);
  printf("Digite o comprimento do terreno: ");
  scanf("%lf", &comprimento);

  area = largura * comprimento;
  perimetro = 2 * (largura + comprimento);
  valor = area * 1000 + perimetro * 300;

  printf("Area do terreno = %.2lf\n", area);
  printf("Perimetro do terreno = %.2lf\n", perimetro);
  printf("Valor do terreno = %.2lf\n", valor);

  return 0;
}
