#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to see if its even or odd: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number " << number << " is even" << endl;
    } else if (number % 2 != 0) {7
        cout << "The number " << number << " is odd" << endl;
    } else {
        cout << "ERROR: Invalid number" << endl;
    }
    return 0;
    }
    