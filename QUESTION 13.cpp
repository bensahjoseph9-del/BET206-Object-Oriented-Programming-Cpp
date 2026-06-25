#include <iostream>
using namespace std;

int main() {
    double resistance;

    cout << "Enter earth resistance: ";
    cin >> resistance;

    while(resistance <= 5) {
        cout << "Enter earth resistance: ";
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system.";

    return 0;
}
