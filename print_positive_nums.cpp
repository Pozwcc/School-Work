#include <iostream>
#include <cmath>
#include <array>
using namespace std;

int main() {
    int numArray[10];
    int positiveNums[10]; // Store positive numbers
    int positiveCount = 0; // Count of positive numbers
    int i = 0; // Counter
    for(i = 0; i < 10; i++) {
        cout << "Input number " << i + 1 << " ofr the array" << endl;
        cin >> numArray[i]; 
    }
    i = 0;
    for (i = 0; i <10; i++) {
        if (numArray[i] > 0) {
            positiveNums[i] = numArray[i];
        } else if(numArray[i] < 0) {
            positiveNums[i] = 0; // Store 0 for negative numbers
        } else {
            positiveNums[i] = numArray[i]; // Store 0 for zero
        }
    }
    cout << "<------------Positive numbers detected------------>" << endl;
    for (positiveCount = 0; positiveCount < 10; positiveCount++) {
        cout << positiveNums[positiveCount] << " ";
}

    cout << endl;
    cout << "----------------------------------------------------" << endl;
    
    return 0;
    }
