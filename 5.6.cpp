// Andreas Pozotos
# include <iostream>
using namespace std;

int main() {
    char characters[14];
    int count;
    
    cout << "Dose 15 xaraktires: " << endl;
    for (count = 0; count <= 14; count++) {
         cin >> characters[count];
    }

    cout << "Xaraktires se antistrofi seira: " << endl;
    cout << characters[14] << characters[13] << characters[12] << characters[11] << characters[10] << characters[9] << characters[8] << characters[7] << characters[6] << characters[5] << characters[4] << characters[3] << characters[2] << characters[1] << characters[0];
    
    return 0;
}