#include <iostream>
#include "random.h"
using namespace std;

int main() {
    Random rgn;
    rgn.getRange();
    int random_number = rgn.generateRandomNumber(rgn.getMin(), rgn.getMax());
    cout << "Generated random number: " << random_number << endl;

    return 0;
}
