#include <iostream>
using namespace std;
int main() {
    cout << "Andreas Pozotos" << endl;

    int num17 = 17;
    int num43 = 43;
    int range;

    int multiples17, multiples43;
    
    for(range = 1; range <= 1000; range++) {
        multiples17 = num17 * range;
        multiples43 = num43 * range;
        
        cout << multiples17 << endl;
        cout << multiples43 << endl;
    }
    
    

    return 0;
}