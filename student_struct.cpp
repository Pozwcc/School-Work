#include <iostream>
#include <string>
using namespace std;

struct Student {
    
    string name;
    int age;
    float semester_grade;
};

int findBestGrade(Student students[], int num_students) {
    const int NUM_STUDENTS = 3; // Define the number of students
    int best_index = 0;
    for (int i = 1; i < NUM_STUDENTS; i++) {
        if (students[i].semester_grade > students[best_index].semester_grade) {
            best_index = i;
    }
    
    }
return best_index;
}

int main() {
    const int NUM_STUDENTS = 3;
    int i = 0;
    Student students[NUM_STUDENTS];
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter information for student " << (i + 1) << ":" << endl;
        cout << "Name: "; cin >> students[i].name;
        cout << "Age: "; cin >> students[i].age;
        cout << "Semester Grade: "; cin >> students[i].semester_grade;
        cout << "--------------------------------" << endl;
    }
    cout << "-------------Student Information-------------- " << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student " << (i + 1) << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Age: " << students[i].age << endl;
        cout << "Semester Grade: " << students[i].semester_grade << endl;
        cout << "--------------------------------" << endl;
    }
    int best_student_index = findBestGrade(students, NUM_STUDENTS);
    cout << "The student with the best grade is: " << students[best_student_index].name << endl;
    cout << "Their grade is: " << students[best_student_index].semester_grade << endl;
    cout << "--------------------------------" << endl;

    return 0;

}
