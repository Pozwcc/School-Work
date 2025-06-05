#include <iostream>
#include <array>
using namespace std;

int copyArray(int sourceArray[5], int destinationArray[5]) {
    
    for(int i = 0; i < 5; i++) {
        destinationArray[i] = sourceArray[i];
    }
    return 0;
}

int main() {
    int i = 0;
    int sourceArray[5];
    int destinationArray[5];

    cout << "Input 5 numbers for the source array: ";
    for (int i = 0; i < 5; i++) {
        cin >> sourceArray[i];
    }

    copyArray(sourceArray, destinationArray);
    cout << "Destination array --> " << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << destinationArray[i];
    }
    cout << endl;
    return 0;
}