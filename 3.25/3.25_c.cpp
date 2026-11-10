#include <iostream>
using namespace std;

int main() {
    double x;
    double result = 1.0;
    double term = 1.0;
    int terms;
    int i = 1;

    cout << "Introduce el valor de x: ";
    cin >> x;

    cout << "Introduce el numero de terminos: ";
    cin >> terms;

    while (i < terms) {
        term *= x / i;
        result += term;
        ++i;
    }

    cout << "El valor aproximado de e^x es: " << result << endl;

    return 0;
}