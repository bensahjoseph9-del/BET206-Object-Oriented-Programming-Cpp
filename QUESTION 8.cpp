#include <iostream>
using namespace std;

int main() {
    double L1, L2, L3, avg;

    for(int i = 1; i <= 6; i++) {
        cout << "\nSet " << i << endl;

        cin >> L1 >> L2 >> L3;

        avg = (L1 + L2 + L3)/3;

        cout << "Average Current = "
             << avg << " A" << endl;
    }

    return 0;
}
