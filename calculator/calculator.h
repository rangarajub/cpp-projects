#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

class Calculator {
private:
    double a;
    double b;

public:
    void getOperands();
    void printMenu();
    void printOperands();
    double add(double a, double b);
    double subtract(double a, double b);
    double multiply(double a, double b);
    double divide(double a, double b);
    double getA() { return a; }
    double getB() { return b; }
};

#endif