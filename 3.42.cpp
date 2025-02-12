#include <iostream>
using namespace std;

int main() {
    cout << "Andreas Pozotos" << endl;
    int arithmos;
    cout << "Dose ena Kypriako arithmo tilefonou:";
    cin >> arithmos;
    int prothema = arithmos / 1000000;
    switch (prothema) {
        case 22: cout << "Lefkosia"; break;
        case 23: cout << "Amochostos"; break;
        case 24: cout << "Larnaka"; break;
        case 25: cout << "Lemesos"; break;
        case 26: cout << "Pafos"; break;

        default: cout << "LATHOS ARITHMOS!!"; break;
    
    }
    cout << endl;

    return 0;
}