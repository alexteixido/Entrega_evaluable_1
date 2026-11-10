#include <iostream>
using namespace std;

int main() {
    int terms;
    double e = 1.0;
    double term = 1.0;
    int i = 1;

    cout << "Introduce el numero de terminos: ";
    cin >> terms;

    while (i < terms) {
        term /= i;
        e += term;
        ++i;
    }

    cout << "El valor aproximado de e es: " << e << endl;

    return 0;
}