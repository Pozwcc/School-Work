#include <iostream>
using namespace std;

int factorial(int n) {
    
    int result = 1;

    
    if (n >= 1) {
        
        for (int i = n ; i >= 1; i--) {
            result *= i;
            
        }
        return result;
    }
    else if (n < 0) {
        cout << "ERROR: Cannot calculate factorial of a negative number." << endl;
    }
    else {
        cout << "ERROR: Invalid input." << endl;
    }
}

    int main() {
        int n;
        cout << "Enter a number to calculate its factorial -->  ";
        cin >> n;
        cout<<factorial(n);

        return 0;
    }
