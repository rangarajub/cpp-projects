#include <iostream>
using namespace std;
#include "calculator.h"

int main() {
    Calculator calc;
    int choice;

    calc.getOperands();
    calc.printMenu();

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    double result;
    switch (choice) {
        case 1:
            result = calc.add(calc.getA(), calc.getB());
            cout << "Result: " << result << endl;
            break;
        case 2:
            result = calc.subtract(calc.getA(), calc.getB());
            cout << "Result: " << result << endl;
            break;
        case 3:
            result = calc.multiply(calc.getA(), calc.getB());
            cout << "Result: " << result << endl;
            break;
        case 4:
            result = calc.divide(calc.getA(), calc.getB());
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

