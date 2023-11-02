#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int x, y;
    cout << "Digite dois numeros inteiros: ";
    cin >> x >> y;

    while (x != y) {
        if (x > y) {
            cout << "Decrescente" << endl;
        } else {
            cout << "Crescente" << endl;
        }
        cout << "Digite dois numeros inteiros: ";
        cin >> x >> y;
    }



    return 0;
}

