#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    string mathites[5];
    float vathmos[5];
    int count = 0;

        for (count = 0; count < 5; count++) {
            cout << "Enter the name of the student: ";
            cin >> mathites[count];
            cout << "Enter the grade of the student: ";
            cin >> vathmos[count];
        }
        int c=0;
        cout << "------------------- Student Grades -----------------------" << endl;
        
        // Students with A grades
        for (int count = 0; count < 5; count++) {
            if (vathmos[count] >= 18) {
                cout << mathites[count] << " with grade A: " << vathmos[count] << endl;
                c++;
                } 
            }
         if (c == 0) {
            cout << "No students with A grades." << endl;
    c = 0;
        }
        // Students with B grades
        for (int count = 0; count < 5; count++) {
            if (vathmos[count] >= 15 && vathmos[count] < 18) {
                cout << mathites[count] << " with grade B: " << vathmos[count] << endl;
                c++;
            } if (c == 0) {
                cout << "No students with B grades." << endl;
            }
        }
            c = 0;
        // Students with C Grades
        for (int count = 0; count < 5; count++) {
            if (vathmos[count] >= 10 && vathmos[count] < 15) {
                cout << mathites[count] << " with grade C: " << vathmos[count] << endl;
            c++;} 
        }
        if (c == 0) {
            cout << "No students with C grades." << endl;
        }
            c = 0;
        // Failed students (D and below)
        for (int count = 0; count < 5; count++) {
            if (vathmos[count] < 10) {
                cout << mathites[count] << " with grade D or below (failed): " << vathmos[count] << endl;
            c++;}
            
    }
        if (c == 0) {
        cout << "No students with D or below grades." << endl;
}
        cout << " " << endl;    
        cout << "----------------------------------------------------------" << endl;
        cout << "" << endl;

        cout << "--------------------- Grades Average ---------------------" << endl;
        
        float total = 0;
        
        for (int count = 0; count < 5; count++) {
            total += vathmos[count];
        }

            float average = (float)total / 5.0; 
            cout << "Average grade of all students (Mesos Oros): " << average << endl;
        
        return 0;
}

        
        
