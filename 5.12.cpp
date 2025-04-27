using namespace std;
#include <iostream>
#include <string>

int main() {
    int arithmoi[20]; // 20 aritmoi pinakas
    int count;
    float sum = 0.0;
    cout << "Dose 20 arithmous: " << endl;
    for(count = 0; count < 20; count++){
        cout << "Dose arithmo >> ";
        cin >> arithmoi[count];
    }

    // Ypologismos tou mesou orou
    for(count = 0; count < 20; count++){
        sum += arithmoi[count]; // Prosthetoume ton arithmo sto athroisma
    }

    float mesos_oros = sum / 20; // Ypologismos mesou orou
    cout << "O mesos oros einai: " << mesos_oros << endl;

    // Typwse ton pinaka se antistrofi seira
    cout << "O pinakas se antistrofi seira einai >>  " << endl;
    for(count = 19; count >= 0; count--){
        cout << arithmoi[count] << " ";
    }
}