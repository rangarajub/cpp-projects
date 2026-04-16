#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    char grade = 'A';
    long population = 7800000000L;
    float pi = 3.14f;
    double e = 2.71828;

    auto type = 'b'; // Using auto to deduce the type
    auto length = 10.48f; 
    auto sum = population + pi + e; // Using auto to deduce the type

    int number {1}; // Brace initialization will truncate the decimal
    cout << "number: " << number << endl; // This will truncate the decimal part and output 1  

    number = 0b11111111; // Binary literal for 255
    number = 0xFF; // Hexadecimal literal for 255
    number = 10; // Decimal literal for 10

    // Narrowing conversion example
    int large_number = 1000000;
    int another{number}; // This will cause a narrowing conversion and may lead to data loss
    short small_number = large_number; // This will cause a narrowing conversion and may lead to data loss
    cout << "small_number: " << small_number << endl; // This may output an unexpected value
    
    return 0;
}