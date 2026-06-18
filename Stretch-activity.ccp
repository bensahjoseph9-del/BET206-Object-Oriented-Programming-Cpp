#include <iostream>
#include <iomanip> // For formatting output decimals

using namespace std;

int main() {
    // Variables for input numbers
    double num1, num2;

    cout << "=========================================\n";
    cout << "       EXTENDED CALCULATOR PROGRAM       \n";
    cout << "=========================================\n";

    // 1. Input Validation
    cout << "Enter the first number: ";
    if (!(cin >> num1)) {
        cout << "Error: Invalid input. Please enter a valid number.\n";
        return 1;
    }

    cout << "Enter the second number: ";
    if (!(cin >> num2)) {
        cout << "Error: Invalid input. Please enter a valid number.\n";
        return 1;
    }
    cout << "-----------------------------------------\n";

    // Set output formatting to show 2 decimal places for precision
    cout << fixed << setprecision(2);

    // 2. Arithmetic Operations
    cout << "Basic Arithmetic:\n";
    cout << "  Sum (Addition)        : " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
    cout << "  Difference (Subtn.)   : " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
    cout << "  Product (Multipl.)    : " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";

    // 3. Division Safety Check
    if (num2 == 0) {
        cout << "  Quotient (Division)   : Error! Cannot divide by zero.\n";
    } else {
        cout << "  Quotient (Division)   : " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
    }

    // 4. Stretch Features (Modulo & Average)
    cout << "\nAdvanced Metrics:\n";
    
    // Modulo requires integer types
    int int1 = static_cast<int>(num1);
    int int2 = static_cast<int>(num2);
    
    if (int2 == 0) {
        cout << "  Remainder (Modulo)    : Error! Cannot calculate remainder with zero divisor.\n";
    } else {
        cout << "  Remainder (Modulo)*   : " << int1 << " % " << int2 << " = " << (int1 % int2) 
             << "  (*using integer parts)\n";
    }

    double average = (num1 + num2) / 2.0;
    cout << "  Average               : (" << num1 << " + " << num2 << ") / 2 = " << average << "\n";
    cout << "=========================================\n";

    return 0;
}
