#include <iostream>
using namespace std;

int flip() {
    return rand() % 2;
}

int main() {
    srand(time(nullptr));

    int heads = 0;
    int tails = 0;

    for (int i = 1; i <= 100; i++) {
        int result = flip();

        if (result == 1) {
            cout << "Heads" << endl;
            heads++;
        }
        else {
            cout << "Tails" << endl;
            tails++;
        }
    }

    cout << "\n" << "Resultados finales:" << endl;
    cout << "Heads (cara): " << heads << endl;
    cout << "Tails (cruz): " << tails << endl;

    return 0;
}