#ifndef RANDOM_H
#define RANDOM_H

#include <iostream>

class Random {
    private:
        int min;
        int max;

    public:
        // Constructor declaration
        Random();

        // Member function declaration
        void getRange(void);
        int generateRandomNumber(int min, int max);
        int getMin() { return min; }
        int getMax() { return max; }
};

#endif // RANDOM_H