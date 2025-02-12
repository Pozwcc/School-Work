#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int X1, X2, P3, count;
    cout << "Dose X1: " << endl;
    cin >> X1;
    cout << "Dose X2: " << endl;
    cin >> X2;

    for(count = X1; count <=X2; count++) {
        if (count%3 == 0) {
            cout << count << " ";
        }
    }
    return 0;
}
