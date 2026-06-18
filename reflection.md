#include <iostream>
using namespace std;

int main() {
    // Declare variables for user input
    int a, b;

    // Prompt user for input to avoid uninitialized variable errors
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Perform and display calculations
    cout << "Sum = " << a + b << "\n";
    cout << "Difference = " << a - b << "\n";
    cout << "Product = " << a * b << "\n";
    
    // basic guard against division by zero
    if (b != 0) {
        cout << "Quotient = " << a / b << "\n";
    } else {
        cout << "Quotient = Undefined (Cannot divide by zero)\n";
    }

    return 0;
}
