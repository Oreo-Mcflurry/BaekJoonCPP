#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;

    if (a == b && b == c) { cout << 10000 + a * 1000;}
    else if (a != b && b != c && a != c) { cout << 100 * ((a>b && a>c) ? a : ((b>c) ? b : c));}
    else { cout << 1000 + 100 * ((a==b) ? a : (b==c) ? b : c);}
}