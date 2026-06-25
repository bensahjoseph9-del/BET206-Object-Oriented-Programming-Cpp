#include <iostream>
using namespace std;

int main() {
    double voltage;

    cout << "Enter voltage: ";
    cin >> voltage;

    while(voltage >= 18) {
        cout << "Enter voltage: ";
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level.";

    return 0;
}
