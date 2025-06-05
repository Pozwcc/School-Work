#include <iostream>
using namespace std;

int main() {
    int numArray[8];
    int evenArray[8];
    int oddArray[8];
    int evenCount = 0;
    int oddCount = 0;
    int j = 0; // To track even numbers at the printing sequence
    int i = 0;


    for (int i = 0; i < 8; i++) {
        cout << "Input number " << i + 1 << " for the array" << endl;
        cin >> numArray[i];
        if (numArray[i] % 2 == 0) {
            evenArray[evenCount++] = numArray[i];

        } else {
            oddArray[oddCount++] = numArray[i];
        }
    }
cout << "----------------------------------------" << endl;
    cout << "The even numbers are: " << endl;
    for (j = 0; j < evenCount; j++) {
        cout << evenArray[j] << " ";
    }
    
    cout << endl;
    cout << "----------------------------------------" << endl;
    return 0;
}