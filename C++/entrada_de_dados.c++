
#include <bits/stdc++.h> 

using namespace std;
int main() {

  double salario1, salario2;
  string nome1, nome2;
    
    cout << "Digite o nome da primeira pessoa: "; // imprime na tela
    getline(cin, nome1); // lê uma linha inteira, incluindo espaços em branco
    cout << "Digite o salario da primeira pessoa: "; // imprime na tela
    cin >> salario1; // lê um valor do tipo double
    cout << "Digite o nome da segunda pessoa: "; // imprime na tela
    cin.ignore(INT_MAX, '\n'); // limpa o buffer da entrada padrão
    getline(cin, nome2); // lê uma linha inteira, incluindo espaços em branco
    cout << "Digite o salario da segunda pessoa: "; // imprime na tela
    cin >> salario2; // lê um valor do tipo double

    
    return 0;
}