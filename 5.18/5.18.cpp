#include <iostream>
using namespace std;

int reverseNumber(int number) {
    int reversed = 0;

    while (number > 0) {
        int digit = number % 10;

        reversed = reversed * 10 + digit;

        number /= 10;
    }

    return reversed;
}

int main() {
    int number;

    cout << "Introduce un numero entero positivo: ";
    cin >> number;

    cout << "Numero invertido: " << reverseNumber(number) << endl;

    return 0;
}