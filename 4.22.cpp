#include <iostream>
#include <string>
using namespace std;

int main() {
    int workers = 2, count;
    string gender, name,male,female;
    int years_worked;
    int apousies =0;
    int apousies_male_10 = 0;
    int apousies_male = 0, apousies_female = 0;
    
    for(count=1; count<=workers; count++){
    
        // Zitoumeno (1)
    cout << "Dose onoma, fylo(type male/female), xronia ypiresias kai apousies" << endl;
    cin >> name >> gender >> years_worked >> apousies;

        cout << "--------------------------------" << endl;
    cout << "Onoma: " << name << endl;
    cout << "Fylo: " << gender << endl;
    cout << "Years worked: " << years_worked << endl;
    cout << "Apousies: " << apousies << endl;
        cout << "--------------------------------" << endl;

        // Zitoumeno (2)
    if (gender == "male") {
            apousies_male += apousies;
        } else if (gender == "female") {
            apousies_female += apousies;
        }

        // Zitoumeno (3)
    if (years_worked >= 10 && gender == "male") {
        apousies_male_10 += apousies ;
    }
    }

    cout << "Apousies ginekwn: " << apousies_female << endl;
    cout << "Apousies antrwn: " << apousies_male << endl;
    cout << "Apousies antrwn me 10+ xronia ypiresias: " << apousies_male_10 <<endl;
    

return 0;
}
