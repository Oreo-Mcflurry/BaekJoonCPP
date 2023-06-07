#include <iostream>
using namespace std;

int main() {

   int a,b,c;
   cin >> a >> b >> c;

   // (A+B)%C
   cout << (a+b)%c << endl;
   // ((A%C) + (B%C))%C
   cout << ((a%c) + (b%c))%c << endl;
   // (A×B)%C
   cout << (a*b)%c << endl;
   // ((A%C) × (B%C))%C
   cout << ((a%c) * (b%c))%c << endl;

}
