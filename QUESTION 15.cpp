#include <iostream>
using namespace std;

int main() {
    double voltage, current, resistance;
    char choice;

    do {
        cout << "Enter Voltage: ";
        cin >> voltage;

        cout << "Enter Current: ";
        cin >> current;

        resistance = voltage / current;

        cout << "Resistance = "
             << resistance << " Ohms\n";

        cout << "Continue (Y/N): ";
        cin >> choice;

    } while(choice == 'Y' || choice == 'y');

    return 0;
}
