#include <iostream>
using namespace std;

void hanoi(int n, int origen, int destino, int auxiliar) {

    // Caso base
    if (n == 1) {
        cout << origen << " -> " << destino << endl;
        return;
    }

    // Mover n-1 discos a la varilla auxiliar
    hanoi(n - 1, origen, auxiliar, destino);

    // Mover el disco más grande al destino
    cout << origen << " -> " << destino << endl;

    // Mover n-1 discos al destino
    hanoi(n - 1, auxiliar, destino, origen);
}

int main() {
    int discos;

    cout << "Introduce el numero de discos: ";
    cin >> discos;

    if (discos < 1) {
        cout << "El numero de discos debe ser positivo." << endl;
        return 1;
    }

    cout << "\n" << "Movimientos necesarios : " << "\n";

    hanoi(discos, 1, 3, 2);

    return 0;
}