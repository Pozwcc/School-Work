#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int i = 0;
    cout << "Enter 5 numbers: ";
    for (i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    // Taksinomish anapoda
    cout << "Numbers in descending order -->" << endl;
    cout << numbers[4] << ", " << numbers[3] << ", " << numbers[2] << ", " << numbers[1] << ", " << numbers[0] << endl; 

    return 0;
}