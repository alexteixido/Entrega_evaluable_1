#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double hours) {
    double charge = 20.0;

    if (hours > 3.0) {
        charge += ceil(hours - 3.0) * 5.0;
    }

    if (charge > 50.0) {
        charge = 50.0;
    }

    return charge;
}

int main() {
    double hours;
    double totalHours = 0.0;
    double totalCharges = 0.0;

    cout << fixed << setprecision(2);

    for (int car = 1; car <= 3; car++) {
        cout << "Horas del coche " << car << ": ";
        cin >> hours;

        double charge = calculateCharges(hours);

        cout << "Coche " << car << " - Horas: " << hours << " - Importe: $" << charge << endl;

        totalHours += hours;
        totalCharges += charge;
    }

    cout << "\n" << "TOTAL" << endl;
    cout << "Horas: " << totalHours << endl;
    cout << "Importe: $" << totalCharges << endl;

    return 0;
}