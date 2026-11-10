#include <iostream>
using namespace std;

int main() {
    int product = 1;

    for (int i = 1; i <= 15; i += 2) {
        product *= i;
    }

    cout << "El producto de los numeros impares es: " << product << endl;

    return 0;
}