#include <iostream>
#include <string>
using namespace std;

int main() {
    int workers = 2;
    int count;
    int produced_boxes;
    int required_boxes = 500;
    int bonus1, bonus2, bonus3;
    int total_boxes = 0; // gia zitoumeno 3
    string name;

    for (count=1; count<=workers; count++) {
    // Zitoumeno 1
    cout << "Dose onoma ergati kai arithmo suskeuasmenon kivotion pou kataskeuase: " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Onoma ergati: ";
    cin >> name;
    cout << "arithmos kivotion pou suskeuase : "; cin >> produced_boxes;
    cout << "-----------------------------------------" << endl;
    cout << "Onoma: " << name << endl;

    // Zitoumeno 2
    if (produced_boxes >= 501 <= 516) {
        int bonus1 = produced_boxes - required_boxes;
        cout << "To bonus tou ergati einai: "<< bonus1 * 1 << endl;
        cout << "    " << endl;
    }else if (produced_boxes >= 516 <= 530) { 
        int bonus2 = produced_boxes - required_boxes;
        cout << "To bonus tou ergati einai: " << bonus2 * 2 << endl; 
        cout << "   " << endl;
    } else if (produced_boxes >=530) {
        int bonus3 = produced_boxes - required_boxes;
        cout << "To bonus tou ergati einai: " << bonus3 * 3 << endl;
        cout << "  " << endl;
    }

    // Zitoumeno 3
    total_boxes += produced_boxes;
    cout << "Synolo kivotion pou syskeuastikan: " << total_boxes << endl;
   
}
return 0;

}
