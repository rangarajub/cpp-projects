#include <iostream>
using namespace std;
extern void swap(int &a, int &b);

int main()
{
    int file_size = 1048576; // Example file size in bytes
    double file_size_in_mb = file_size / 1024.0;
    cout << "Hello, World" << endl;

    cout << endl; 

    cout << "File size in MB: " << file_size_in_mb << endl;

    cout << endl; 

    // Before swap
    int a = 5, b = 10;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    cout << endl;

    // const variable.
    const double pi = 3.14159;

    // Get the radius from the user
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = pi * radius * radius;
    cout << "Area of the circle: " << area << endl;

    cout << endl;

    // Total Sales Tax
    double sales = 95000;
    cout << "Sales:      $" << sales << endl;
    
    const double state_tax_rate = 0.04;
    double state_tax = sales * state_tax_rate;
    cout << "State tax:  $" << state_tax << endl;

    const double county_tax_rate = 0.02;
    double county_tax = sales * county_tax_rate;
    cout << "County tax: $" << county_tax << endl;

    double total_tax = state_tax + county_tax;
    cout << "Total tax:  $" << total_tax << endl;

    return 0;
}
