#include "calculator.h"
using namespace std;

void Calculator::getOperands() {
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void Calculator::printMenu() {
    cout << "Select operation:" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
}

void Calculator::printOperands() {
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
}

double Calculator::add(double a, double b) {
    return a + b;
}

double Calculator::subtract(double a, double b) {
    return a - b;
}

double Calculator::multiply(double a, double b) {
    return a * b;
}

double Calculator::divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 or handle as needed
    }
    return a / b;
}
