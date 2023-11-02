#include <iostream>
#include <iomanip>
#include <cmath>
 #include <limits>

using namespace std;

int main() {

    int N, cont;
    double soma, media, percentual;


    cout << "Quantas pessoas você quer cadastrar? ";
    cin >> N;

    string nomes[N];
    int idades[N];
    double alturas[N];

    for (int i = 0; i < N; ++i) {
        cout << "Dados da " << i + 1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, nomes[i]);
        cout << "Idade: ";
        cin >> idades[i];
        cout << "Altura: ";
        cin >> alturas[i];
    }
    for (int i = 0; i < N; ++i) {
        soma = soma + alturas[i];
    }
    media = soma / N;

    cout << fixed << setprecision(2);

    cout << "Altura média: " << media << endl;

    cont = 0;

    for (int i = 0; i < N; ++i) {
        if (idades[i] < 16) {
            cont++;
        }
    }

    percentual = cont * 100.0 / N;

    cout << "Pessoas com menos de 16 anos: " << percentual << "%" << endl;

for (int i = 0; i < N; ++i) {
        if (idades[i] < 16) {
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
