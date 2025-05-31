#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int maxNum, minNum, midNum;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Biggest number
    if (num1 > num2 && num1 > num3) {
        maxNum = num1;
    }
    else if (num2 > num1 && num2 > num3) {
        maxNum = num2;
    } else {
        maxNum = num3;
    }
    // Small number
    if (num1 < num2 && num1 < num3) {
        minNum = num1;
    }
    else if (num2 < num1 && num2 < num3) {5 
        minNum = num2;
    } else {
        minNum = num3;  
    }

    // Middle Number
    if ((num1 < num2 && num1 > num3) || (num1 > num2 && num1 < num3)) {
        midNum = num1;
    }
    else if ((num2 < num1 && num2 > num3) || (num2 > num1 && num2 < num3)) {
        midNum = num2;
    } else {
        midNum = num3;
    }
    cout << "Sorted numbers by ascending order: " << endl;
    cout << minNum << " < " << midNum << " < " << maxNum << endl;

    return 0;
}
