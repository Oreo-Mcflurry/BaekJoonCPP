#include <iostream>
using namespace std;

int main() {
    int hour, minate, oven;

    cin >> hour >> minate >> oven;

    int ovenHour = oven / 60;
    int ovenMinate = oven % 60;

    minate += ovenMinate;
    hour += minate / 60 + ovenHour;
    minate %= 60;

    if (hour >= 24){ hour -= 24; }

    cout << hour << " " << minate;
}