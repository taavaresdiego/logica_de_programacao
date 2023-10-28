
#include <bits/stdc++.h> // biblioteca que inclui todas as bibliotecas padrões do C++

using namespace std;
int main() {

   double x;
   x = 3.4565;
cout << fixed << setprecision(2) << x << endl; // esse fixed é para fixar o número de casas decimais, enquanto o setprecision é para definir o número de casas decimais
cout << fixed << setprecision(1) << x << endl; // 3.5
cout << fixed << setprecision(0) << x << endl; // 4

int idade;
double salario;
string nome;
char sexo;

idade = 32;
salario = 4560.5;
nome = "Maria Silva";
sexo = 'F';

cout << fixed << setprecision(2);   // fixa o número de casas decimais em 2
cout << "O funcionário " << nome << ", sexo " << sexo << 
", ganha R$ " << salario << " e tem " << idade << " anos." << endl; // O funcionário Maria Silva, sexo F, ganha R$ 4560.50 e tem 32 anos.



    return 0;
}