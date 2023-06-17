#include<iostream>
#include<string>
using namespace std;

int main() {
    string arr;
    cin >> arr;

    int total = 0;
    for(int i=0;i<arr.length();i++){
        int temp = arr[i] - 'A';

        if(temp<3){ total += 3; }
        else if(temp < 6) { total += 4; }
        else if(temp < 9) { total += 5; }
        else if(temp < 12) { total += 6; }
        else if(temp < 15) { total += 7; }
        else if(temp < 19) { total += 8; }
        else if(temp < 22) { total += 9; }
        else { total += 10; }
    }

    cout << total;
}