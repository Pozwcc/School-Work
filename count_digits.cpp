#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while(num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num;
    
    cout << "Enter a number to count its digits --> ";
    cin >> num;

    if (num < 0) {
        num = -num; 
    }
    
    int result_count;
    result_count = countDigits(num);
    cout << "Total number of digits of the number given: " << result_count << endl;

    return 0;
}