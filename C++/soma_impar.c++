#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

   int x, y, soma;
   cout << "Digite dois numeros: " << endl;
    cin >> x >> y;

  if (x > y) {
    std::swap(x, y); // essa função permite trocar os valores das variáveis sem precisar criar uma terceira variável auxiliar
  }

  soma = 0;

  for (int i = x+1; i < y; i++) {
          if (i % 2 != 0) {
              soma = soma + i;
          }
      }

  cout << "SOMA DOS IMPARES = " << soma << endl;

    return 0;
}
