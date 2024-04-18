//Ian Lin
#include <iostream>
using namespace std;

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x, y;

    cout << endl;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "x: " << x << ", y: " << y << " (Before swap function)" << endl;

    swap(x, y);

    cout << endl;
    cout << "Swapped Values:\n";
    cout << "x: " << x << ", y: " << y << " (After swap function)" << endl;
    cout << endl;

    return 0;
}

