#include <iostream>
using namespace std;

int main() {
    string numero;

    cout << "Introduce el numero cifrado: ";
    cin >> numero;

    if (numero.length() != 4) {
        cout << "El numero debe tener cuatro cifras." << endl;
        return 1;
    }

    swap(numero[0], numero[2]);
    swap(numero[1], numero[3]);

    for (int i = 0; i < 4; i++) {
        numero[i] = ((numero[i] - '0' + 3) % 10) + '0';
    }

    cout << "Numero original: " << numero << endl;

    return 0;
}