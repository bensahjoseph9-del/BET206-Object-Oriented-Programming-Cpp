#include <iostream>
using namespace std;

int main() {
    double power, time, energy;
    double totalEnergy = 0;

    for(int i = 1; i <= 8; i++) {
        cin >> power >> time;

        energy = power * time;

        totalEnergy += energy;
    }

    cout << "Total Energy = "
         << totalEnergy << " Wh";

    return 0;
}
