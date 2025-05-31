using namespace std;
#include <iostream>
#include <string>

int main() {
    int num1, num2;
    char calculator;
    cout << "Enter Calculation: " << endl;
    cin >> num1 >> calculator >> num2;

    
    switch(calculator) {
        case '+': {
        cout << "Addition Result (+) : " << num1 + num2 << endl;
        break;

    }
    case '-':
        cout << "Substraction Result (-) " << num1 - num2 << endl;
        break;

        case '*': 
        cout << "Multiplication Result (*): " << num1 * num2 << endl;
        break;

        case '/':
        if (num2 != 0) {
            cout << "Division Result (/): " << num1 / num2 << endl;
        }
        else {
            cout << "ERROR: Cannot divide by zero" << endl;
        }
        break;
        
}
return 0;
}