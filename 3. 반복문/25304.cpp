#include <iostream>
using namespace std;

void isEqual(int a, int b){
    if(a==b){
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    long long total;
    int n;
    int temp = 0;

    cin >> total >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        temp += a*b;
    }

    isEqual(temp,total);
}
