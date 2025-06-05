#include <iostream>
using namespace std;

int Search(int arr[]) {
    int low = 0, high = 9, mid;
    int target;
    cout << "Enter a number to search for in the array --> ";
    cin >> target;

    while(low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid; // Target found
        } else if(arr[mid] < target) {
            low = mid + 1; // anazytish sto deksio komati
        }
        else {
            high = mid - 1; // anazytish sto aristero komati
           }
        }
        return -1; // Target not found
        
        }

        int main() {
           for (int run = 0; run < 100; run++) { // Repeat 100 times
        int numbers[10];
        cout << "Enter 10 numbers in ascending order: " << endl;
        for (int i = 0; i < 10; i++) {
            cin >> numbers[i];
        }
        int result = Search(numbers);
        if (result != -1) {
            cout << "Number found at index " << result << endl;
        } else {
            cout << "Number not found in the array..." << endl;
        }
        cout << "Run complete!" << " Rerunning..." << endl;
    }
    
    return 0;
        }
    
