#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int a, b, c;

    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;

    if (a < b && a < c) {
        cout << "O menor valor é na letra A: " << a << endl;
    } else if (b < a && b < c) {
        cout << "O menor valor é na letra B: " << b << endl;
    } else {
        cout << "O menor valor é na letra C: " << c << endl;
    }



    return 0;
}
