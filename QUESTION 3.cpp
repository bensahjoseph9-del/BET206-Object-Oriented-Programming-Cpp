#include <iostream>

using namespace std;

int main() {
    float ratedCurrent, startingCurrent;

    cout << "Enter rated current: ";
    cin >> ratedCurrent;

    cout << "Enter starting current: ";
    cin >> startingCurrent;

    if (startingCurrent > (3 * ratedCurrent))
        cout << "High starting current. Use proper motor starter";
    else
        cout << "Starting current is acceptable";

    return 0;
}
