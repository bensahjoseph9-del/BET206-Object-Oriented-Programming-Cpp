#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    int attempts = 0;

    while(attempts < 3) {
        cout << "Enter access code: ";
        cin >> code;

        if(code == "BEE208") {
            cout << "Access granted";
            return 0;
        }

        attempts++;
    }

    cout << "Access denied. Maximum attempts reached.";

    return 0;
}
