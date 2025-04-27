    // Andreas Pozotos
using namespace std;
#include <iostream>
#include <string>

int main() {
    cout << "Dose telikous vathmous 20 mathitwn: " << endl;
    int grades[20]; // Vathmoi mathitwn pinakas
    int count;

    for (count = 0; count < 20; count++) {
        cout << "Vathmos mathith: ";
        cin >> grades[count];
    }

    // Mathites me Vathmous katw apo 10
    cout << "Mathites me vathmous katw apo 10: " << endl;
    for (count = 0; count < 20; count++) {
        if (grades[count] < 10) {
            cout << "Mathitis " << count + 1 << ": " << grades[count] << endl;
        }
    }

    // Mathites me vathmous 18 kai panw (arista)
    cout << "Aristoi mathites: " << endl;
    for (count = 0; count < 20; count++) {
        if (grades[count] >= 18) {
            cout << "Mathitis " << count + 1 << ": " << grades[count] << endl;
        }
    }
}