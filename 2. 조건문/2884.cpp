#include <iostream>
using namespace std;

int main() {
    int hour, minate;

    cin >> hour >> minate;

    minate -= 45;

    cout << ((minate >= 0) ? hour : (hour == 0) ? 23 : hour-1) << " " << ((minate >= 0) ? minate : 60+minate);
}