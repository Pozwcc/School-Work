#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// askisi sel 118 ask 2.33

int N;
int M;


cout << "dose litra pou xoraei h deksameni: ";
cin >> N;
cout << "dose litra pou xora o kouvas: ";
cin >> M;

int required_kouvades = N/M;
cout << "Tha xriastoun " << required_kouvades << " kouvades" <<endl;


return 0;
}
