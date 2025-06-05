#include <iostream>
using namespace std;

void swap(int& num1, int& num2) {
    int pros = num1;
    num1 = num2;
    num2 = pros;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers to swap: ";
    cin >> num1 >> num2;

    swap(num1, num2);
    cout << "Swapped numbers --> " <<  num1 << " " << num2 << endl;

}