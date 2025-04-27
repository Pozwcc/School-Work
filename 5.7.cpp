// Andreas Pozotos
#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[15]; // Onomata mathitwn
    int count;

    cout << "Dose onomata 15 mathitwn: " << endl;
    for (count = 0; count < 15; count++){
        cout << "Onoma mathith: ";
        cin >> names[count];
    }

    int index;
    cout << "Pio mathith thes na deis to onoma tou? (0-14): ";
    cin >> index;

    if (index >= 0 && index < 15) {
        cout << "To onoma tou mathith einai: " << names[index] << endl;
    } else {
        cout << "Lathos arithmos!!" << endl;
    }

    return 0;
}
