// Array operator app terminal
#include <iostream>
using namespace std;

int sumArray(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

double averageArray(int array[], int size) {
    if (size == 0) return 0;
    return static_cast<double>(sumArray(array, size)) / size; // To ensure the result is a double
}

int maxArray(int array[], int size) {
    if (size == 0) return 0; // Gia na mhn exei provlima ean ine keno
    int max = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int minArray(int array[], int size) {
    if (size == 0) return 0;
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    for (int repeat = 0; repeat < 100; repeat++) {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;
        int array[size];

        // Check gia ean ine ok to size
        if (size <= 0) {
            cout << "Size must be a positive integer." << endl;
            return 1;
        }

        cout << "Enter " << size << " numbers for the array: ";
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
        cout << "Choose what to do with the array: " << endl;
        cout << "----------------------------------------" << endl;
        cout << "1. Print the array" << endl;
        cout << "2. Calculate the sum of it" << endl;
        cout << "3. Calculate the average of it" << endl;
        cout << "4. Find the maximum value in it" << endl;
        cout << "5. Find the minimum value in it" << endl;

        int choice;
        cout << "-----------------------------------------" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "  " << endl;
            cout << "-------Array Numbers-----------------> " << endl;
            for (int i = 0; i < size - 1; i++) {
                cout << array[i] << ", ";
            }
            cout << array[size - 1] << endl; // typwse ton teleutaio arithmo xwris koma
        } else if (choice == 2) {
            cout << " " << endl;
            cout << "-------Sum of the Array---------------> " << endl;
            cout << "The sum of the array is: " << sumArray(array, size) << endl;
        } else if (choice == 3) {
            cout << " " << endl;
            cout << "-------Average of the Array-----------> " << endl;
            cout << "The average of the array is: " << averageArray(array, size) << endl;
        } else if (choice == 4) {
            cout << " " << endl;
            cout << "-------Maximum Value of the Array-----> " << endl;
            cout << "The maximum value in the array is: " << maxArray(array, size) << endl;
        } else if (choice == 5) {
            cout << " " << endl;
            cout << "-------Minimum Value of the Array-----> " << endl;
            cout << "The minimum value in the array is: " << minArray(array, size) << endl;
        } else {
            cout << " " << endl;
            cout << "-----------------------------------------" << endl;
            cout << "ERROR: Invalid choice! Please enter a number from the menu (1-5) --> "
            << endl;
            return 1;
        }
        cout << "-----------------------------------------" << endl;
    }
    return 0; // telos programmatos
}
