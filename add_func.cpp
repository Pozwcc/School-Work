#include <iostream>
using namespace std;

int add(int a, int b) {
    return a+ b;
}

int main() {
    int a, b;
    cout << "Dose a kai b -->";
    cin >> a >> b;
    int result = add(a,b);
    cout << "Apotelesma: " << result << endl;
}