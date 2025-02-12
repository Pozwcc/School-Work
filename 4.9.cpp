#include <iostream>
using namespace std;
int main() {
    int ginomeno = 1;
    int num;
    for (int num = 10; num <= 20; num += 2) {  // zigoi arithmoi
        ginomeno = ginomeno*num;
    }
    
    cout << "To ginomeno einai: " << ginomeno << endl;
    return 0;
}