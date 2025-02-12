#include <iostream>
using namespace std;
int main() {
     int numbers[50];
    int maxNumber;

    cout << "Dose 50 arithmous: " << endl;
    for (int count = 0; count < 50; count++) {
        cin >> numbers[count];
        if (count == 0 || numbers[count] > maxNumber) {
            maxNumber = numbers[count];
        }
    }

    cout << "O megaliteros arithmos einai: " << maxNumber << endl;
    return 0;
}