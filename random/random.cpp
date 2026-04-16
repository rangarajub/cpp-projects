#include "random.h"
#include <cstdlib>
#include <ctime>
using namespace std;

// Constructor implementation
Random::Random() {
    min = 0;
    max = 100;
    srand(time(NULL));  // Seed once in constructor
}

// Member function implementation
void Random::getRange(void) {
    // Get the min and max values of random number from the user
    cout << "Enter the minimum value: ";
    cin >> min;
    cout << "Enter the maximum value: ";
    cin >> max;
}    

int Random::generateRandomNumber(int min, int max) {
    // generate a random number between min and max
    return rand() % (max - min + 1) + min;
}