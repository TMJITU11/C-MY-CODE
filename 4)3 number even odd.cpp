#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

//Jitu Copy korish na...

    cout << "Enter three integer numbers: ";
    cin >> num1 >> num2 >> num3;


    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }

    if (smallest % 2 == 0) {
        cout << "The smallest number is Even." << endl;
    } else {
        cout << "The smallest number is Odd." << endl;
    }

    return 0;
}

