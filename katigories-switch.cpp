#include <iostream>
using namespace std;
int main() {
    cout << "Andreas Pozotos" << endl;
    
    char katigoria;
    cout << "Dose Katigoria:";
    cin >> katigoria;
    switch (katigoria) {
        case 'A':
            cout << "Kostos: 200" << endl;
            break;
            case 'B':
            cout << "Kostos: 150" << endl;
            break;
            case 'C':
            cout << "Kostos: 100" << endl;
            break;
            case 'D':
            cout << "Kostos: 50" << endl;
            break;
            default:
            cout << "Lathos" ;
    }

    return 0;
}