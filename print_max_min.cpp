#include <iostream>
using namespace std;

int minNum(int numbers[10]) {
    // Print smallest number from array
    int minNum = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] < minNum) {
            minNum = numbers[i];
        } 
    }
    cout << "Smallest number --> " << minNum << endl;
}


int main() {
    int numbers[10];
    cout << "Enter 10 numbers: ";
    
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // Print biggest number from the array
    int maxNum = numbers[0];
    for (int i = 1; i < 10; i++) {
        if (numbers[i] > maxNum) {
            maxNum = numbers[i];
        }
    }
    cout << "Biggest number --> " << maxNum << endl;

    // Call function for small number
    minNum(numbers);
    return 0;

    
}