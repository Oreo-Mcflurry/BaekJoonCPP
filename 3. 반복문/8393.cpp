#include <iostream>
using namespace std;


int facto(int n) {
    if(n==0){
        return 0;
    } else{
        return facto(n-1) + n;
    }
}

int main() {
    int n;
    cin >> n;

    cout << facto(n);
}