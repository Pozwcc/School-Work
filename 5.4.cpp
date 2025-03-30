// Andreas Pozotos
# include <iostream>
using namespace std;

int main() {
    int arithmoi[9];
    int count;

    cout << "Dose 10 arithmous: " << endl;
    for (count = 0; count <10; count++) {
        cin >> arithmoi[count];
    }

    cout << "Protos arithmos: " << arithmoi[0] << endl;
    cout << "Telefteos arithmos: " << arithmoi[9] << endl;

    return 0;
}
