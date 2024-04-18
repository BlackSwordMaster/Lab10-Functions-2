#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert weight from ounces to pounds and grams
void convertWeight(double ounces, double &pounds, double &grams) {
    pounds = ounces / 16.0; // pounds=ounce/16
    grams = ounces * 28.3495; // 1 ounce = 28.34953
}
int main() {
    double ounces, pounds, grams;

    cout << fixed << setprecision(2);

    do {
        cout << "Enter the weight of your item in ounces (oz)" << endl;
        cout << "or enter zero to end the program: ";
        cin >> ounces;

        // Validate input
        if (ounces < 0) {
            cout << "Please enter a positive value. Try again.\n";
            continue;
        }

        else if(ounces == 0) {
            cout << endl;
            cout << "Exit program. Good bye!\n";
            break;
        } else {
        // Call the function to convert weights
        convertWeight(ounces, pounds, grams);

        cout << endl;
        cout << ounces << " oz = " << pounds << " lb" << endl;
        cout << ounces << " oz = " << grams << " g" << endl;
        cout << endl;
        }
    } while (ounces != 0);

    return 0;
}


