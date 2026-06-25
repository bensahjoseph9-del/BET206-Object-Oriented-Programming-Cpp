#include <iostream>
using namespace std;

int main() {
    int choice;
    double value, result;

    cout << "1. Volts to millivolts\n";
    cout << "2. Amperes to milliamperes\n";
    cout << "3. Kilowatts to watts\n";
    cout << "4. Ohms to kilo-ohms\n";

    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch(choice) {
        case 1:
            result = value * 1000;
            cout << value << " V = "
                 << result << " mV";
            break;

        case 2:
            result = value * 1000;
            cout << value << " A = "
                 << result << " mA";
            break;

        case 3:
            result = value * 1000;
            cout << value << " kW = "
                 << result << " W";
            break;

        case 4:
            result = value / 1000;
            cout << value << " O = "
                 << result << " kO";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
