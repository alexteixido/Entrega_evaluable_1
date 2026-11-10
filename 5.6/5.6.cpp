#include <iostream>
using namespace std;

int main() {
    srand(time(nullptr));

    int a, b, c, d, e, f;

    // a) 1 <= n <= 2
    a = 1 + rand() % 2;

    // b) 1 <= n <= 100
    b = 1 + rand() % 100;

    // c) 0 <= n <= 9
    c = rand() % 10;

    // d) 1000 <= n <= 1112
    d = 1000 + rand() % 113;

    // e) -1 <= n <= 1
    e = -1 + rand() % 3;

    // f) -3 <= n <= 11
    f = -3 + rand() % 15;

    cout << "a) " << a << endl;
    cout << "b) " << b << endl;
    cout << "c) " << c << endl;
    cout << "d) " << d << endl;
    cout << "e) " << e << endl;
    cout << "f) " << f << endl;

    return 0;
}