#include <iostream>
#include <cmath>
using namespace std;

int power(int num, int pow) {
    int result = 1;
    for (int i = 0; i < pow; i++) {
        result *= num;
    }
    return result;
}

int main() {
    int num, pow;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the power to traise the number to --> ";
    cin >> pow;

    int result = power(num, pow);

    cout << "The number " << num << " raised to the power of " << pow << " is: " << result << endl;
    
    return 0;
}
