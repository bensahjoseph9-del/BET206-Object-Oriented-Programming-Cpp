#include <iostream>
using namespace std;

int main() {
    double wattage, totalPower = 0;

    for(int i = 1; i <= 12; i++) {
        cout << "Enter wattage " << i << ": ";
        cin >> wattage;
        totalPower += wattage;
    }

    cout << "Total Lighting Load = "
         << totalPower << " Watts";

    return 0;
}
