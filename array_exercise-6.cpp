#include <iostream>
#include <array>
using namespace std;

int main() {
    int arrayNum[5];
    int i = 0;
    cout << "Enter 5 number for the array --> ";
    for (i = 0; i < 5; i++) {
        cin >> arrayNum[i];
    }
    cout << "Tell me a number from the array --> ";
    int inputedNum;
    cin >> inputedNum;

    for(i = 0; i < 5; i++) {
        if (arrayNum[i] == inputedNum) {
            cout << "The number " << inputedNum << " has been found in the position " << i << " of the array." << endl;
        }
    } 

    return 0;

}