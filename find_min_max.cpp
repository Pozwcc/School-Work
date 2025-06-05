#include <iostream>
#include <array>
using namespace std;

int main() {
    int arrNum[10];
    int maxNum, minNum;
    cout << "Enter 10 numbers for the array: " << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arrNum[i];
    }
    maxNum = arrNum[0];
    minNum = arrNum[0];
    for (int i = 1; i < 10; i++) {
        if (arrNum[i] > maxNum) {
            maxNum = arrNum[i];
        } else if (arrNum[i] < minNum) {
            minNum = arrNum[i];
        }
    }
    cout << "Maximum  number is: " << maxNum << endl;
    cout << "Minimum number is: " << minNum << endl;
    return 0;
}