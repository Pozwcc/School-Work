// Andreas Pozotos
using namespace std;
#include <iostream>
#include <string>

int main() {
    cout << "Dose 20 xaraktires (char): " << endl;
    char characters[20]; // Xaraktires pinakas
    int count;

    for (count = 0; count < 20; count++) {
        cout << "Xarakthras >> ";
        cin >> characters[count];
    }

    cout << "Dose xarakthra na psaxoume >>  ";
    char searchChar;
    cin >> searchChar;

    // Psaxnoume an to xarakthra einai ston pinaka
    bool found = false; 
    int matchCount = 0;

    for (count = 0; count < 20; count++) {
        if (characters[count] == searchChar) {
            found = true;
            matchCount++;
        }
    }

    cout << "Xarakthras  " << searchChar << " exei vrethike " << matchCount << " fores." << endl;
}