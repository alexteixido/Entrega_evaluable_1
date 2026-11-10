#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;

    cout << "Introduce un entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "El numero debe ser no negativo." << "\n";
        return 1;
    }

    int i = 1;

    while (i <= n) {
        factorial *= i;
        ++i;
    }

    cout << n << "! = " << factorial << "\n";

    return 0;
}