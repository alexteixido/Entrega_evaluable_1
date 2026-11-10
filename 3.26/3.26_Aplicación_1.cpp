#include <iostream>
using namespace std;

int main() {
    string numero;

    cout << "Introduce un numero de cuatro cifras: ";
    cin >> numero;

    if (numero.length() != 4) {
        cout << "El numero debe tener cuatro cifras." << endl;
        return 1;
    }

    for (int i = 0; i < 4; i++) {
        numero[i] = ((numero[i] - '0' + 7) % 10) + '0';
    }

    swap(numero[0], numero[2]);
    swap(numero[1], numero[3]);

    cout << "Numero cifrado: " << numero << endl;

    return 0;
}