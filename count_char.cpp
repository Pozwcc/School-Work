#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string to count its characters: ";
    cin >>  input;

    // Count characters in string
    int count = input.length();
    cout << "-------------------------" << endl;
    cout << "Total number of characters in the string: " << count << endl;
    cout << endl;
    return 0;
}