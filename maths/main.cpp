#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double result = floor(1.2);
    cout << "Floor of 1.2: " << result << endl << endl;

    result = ceil(1.2);

    result = pow(2, 3);
    cout << "2 to the power of 3: " << result << endl << endl;

    // Calculate the area and parameter of a circle by getting the radius from user input
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    const double pi = 3.14159;
    double area = pi * pow(radius, 2);
    double perimeter = 2 * pi * radius;

    cout << "Area of the circle: " << area << endl;
    cout << "Perimeter of the circle: " << perimeter << endl;

    return 0;
}