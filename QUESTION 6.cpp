#include <iostream>
using namespace std;

int main() {
    int choice;
    double PT, ST, PV, SV, ratio;

    cout << "1. Calculate Turns Ratio\n";
    cout << "2. Calculate Secondary Voltage\n";
    cout << "3. Calculate Primary Voltage\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cin >> PT >> ST;
            ratio = PT / ST;
            cout << "Turns Ratio = " << ratio;
            break;

        case 2:
            cin >> PV >> PT >> ST;
            SV = PV * ST / PT;
            cout << "Secondary Voltage = " << SV << " V";
            break;

        case 3:
            cin >> SV >> PT >> ST;
            PV = SV * PT / ST;
            cout << "Primary Voltage = " << PV << " V";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
