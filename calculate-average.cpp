#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int sum = 0;
    int i = 0;
    cout << "Enter 10 numbers: ";

    for(int i = 0; i < 10; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = sum/10.0;
    cout << "The average of the numbers is: " << average << endl;
return 0;
}