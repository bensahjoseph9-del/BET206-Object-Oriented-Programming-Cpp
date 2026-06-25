#include <iostream>
using namespace std;

int main() {
    int result;
    int pass = 0, fail = 0;

    for(int i = 1; i <= 15; i++) {
        cout << "Enter 1(Pass) or 0(Fail): ";
        cin >> result;

        if(result == 1)
            pass++;
        else
            fail++;
    }

    cout << "Passed = " << pass << endl;
    cout << "Failed = " << fail;

    return 0;
}
