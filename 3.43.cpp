#include <iostream>
using namespace std;

int main() {
cout << "Andreas Pozotos" << endl;

int selides;
cout << "Dose arithmo selidon: ";
cin >> selides;


if (selides <= 100) {  // arithmos selidwn
 cout << "xreosi 0.28 euro gia kathe selida" << endl;
        cout << "Synoliki timi: " << selides * 0.28 << " EURO" << endl;
    } 
    
    else if (selides >= 101 && selides <= 500) {
        cout << "xreosi 0.24 euro gia kathe selida" << endl;
            cout << "Synoliki timi: " << selides * 0.24 << " EURO" << endl;
        } 
        else if (selides >=501) {
            cout << "xreosi 1.50 euro gia kathe selida" << endl;
            cout << "Synoliki timi: " << selides * 1.50 << " EURO" << endl;
    }
    //Telos programatos.
    return 0;
}
