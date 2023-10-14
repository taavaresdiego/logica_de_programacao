#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  int idade;
  double salario, altura;
  char genero;
  char nome[50];
  
  idade = 32;
  salario = 4560.9;
  altura = 1.78;
  genero = 'M';
  strcpy(nome, "Joao da Silva");
  
  printf("Nome: %s\n", nome);
  printf("Idade: %d\n", idade);
  printf("Salario: %.2lf\n", salario);
  printf("Altura: %.2lf\n", altura);
  printf("Genero: %c\n", genero);
  

   return 0;
}

