#include <iostream>
#include <iomanip>
using namespace std;

int main() {
// askisi sel 115 ask 2.23

int previous_log;
int current_log;
int kilowatts = current_log - previous_log;
int xreosi = kilowatts * 0.030;

cout << "dose proigoumeno logariasmo:";
cin >> previous_log;
cout << "dose current logariasmo:";
cin >> current_log;
cout << "Katanalomena kilowatts:" << kilowatts << endl;
cout << "Xreosi sinoliki:" << xreosi << " euro" << endl;


return 0;
}
