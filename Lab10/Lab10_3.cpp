//Ian Lin
#include <iostream>
#include <time.h>
using namespace std;

void winNums(int &num1, int &num2, int &num3, int &num4, int &num5, int &mega) {
    num1 = rand() % 75 + 1;  // Numbers between 1 and 75
    num2 = rand() % 75 + 1;
    num3 = rand() % 75 + 1;
    num4 = rand() % 75 + 1;
    num5 = rand() % 75 + 1;
    mega = rand() % 15 + 1;  // Mega number between 1 and 15
}

int main(){

     srand(time(NULL));// week4 example 9b_seed_generation

    int num1, num2, num3, num4, num5, mega;

    winNums(num1,num2,num3,num4,num5,mega);

    cout << endl;
    cout << "The wining numbers are:" << endl;
    cout << num1 << " " << num2 << " " << num3 << " " << num4 << " " << num5 << " mega: " << mega << endl;
    cout << endl;
}