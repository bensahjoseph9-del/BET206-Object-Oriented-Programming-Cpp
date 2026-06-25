#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    while(temperature <= 90) {
        cout << "Enter temperature: ";
        cin >> temperature;
    }

    cout << "Motor temperature unsafe. Stop motor test.";

    return 0;
}
