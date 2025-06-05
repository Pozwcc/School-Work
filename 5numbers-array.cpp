#include <iostream>
#include <array>
using namespace std;

int main() {
    int arrayNum[5];
    
    
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arrayNum[i];
    }
    
    cout << "Array numbers --> " << endl;
    for (int i = 0; i < 4; i++){
        cout << arrayNum[i] << ", ";
    } 
    cout<< arrayNum[4] << endl; 

    return 0;
}