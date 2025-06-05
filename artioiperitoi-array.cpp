#include <iostream>
using namespace std;

int main() {
    int i = 0;
    int oddCount = 0;
    int evenCount = 0;
    int numbers[10];
    cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
        if (numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        
    }
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
    }
