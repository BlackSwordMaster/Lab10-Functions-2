//Ian Lin
#include <iostream>
#include <cmath>
using namespace std;

// Function to find the square root and round it to the nearest integer
int sqrtRounded(double num) {
    return round(sqrt(num));
}

int main() {
    double number;

    while (true) {
        cout << "Enter a positive number (or enter a ZERO(0) to exit): ";
        cin >> number;

        // Validate the number
        if (number < 0) {
            cout << number << " is an invalid input. Please re-enter." << endl;
        } else if (number == 0) {
            cout << "0 is entered. Exit program." << endl;
            exit(0);
        } else {
            int roundedSqrt = sqrtRounded(number);
            cout << "The square root of " << number << " rounded to the nearest integer is " << roundedSqrt << "." << endl;
        }
    }

    return 0;
}
