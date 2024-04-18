//Ian Lin
#include <iostream>
using namespace std;

int main(){
    int x,y;

    cout << endl;
    cout << "Enter two integers: ";
    cin >> x >> y;

    cout << "x: " << x << " " << "y: " << y << endl;

    int swap = x;
    x = y;
    y = swap; 

    cout << endl;
    cout << "Swapped values:" << endl;
    cout << "y: " << x << " " << "x: " << y << endl;

    return 0;
}