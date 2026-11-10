#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0.0;
    int terms = 200000;
    int i = 1;
    int firstMatch = 0;

    cout << "Accuracy set at: " << terms << endl;
    cout << "Term       Pi" << endl;

    while (i <= terms) {
        if (i % 2 == 1) {
            pi += 4.0 / (2 * i - 1);
        }
        else {
            pi -= 4.0 / (2 * i - 1);
        }

        if (i <= 5) {
            cout << i << "          " << fixed << setprecision(8) << pi << endl;
        }

        if (firstMatch == 0 && pi >= 3.14159 && pi < 3.14160) {
            firstMatch = i;
        }

        ++i;
    }

    cout << "\n" << "Aproximacion final de pi: " << setprecision(10) << pi << endl;

    cout << "Primer numero de terminos que empieza por " << "3.14159: " << firstMatch << endl;

    return 0;
}