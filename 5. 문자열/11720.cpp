#include<iostream>
#include<string>
using namespace std;


int main() {

    int trash;
    string arr;
    cin >> trash >> arr;

    int totalNumber = 0;
    for(int i=0;i<arr.length();i++){
        totalNumber += int(arr[i] - '0');
    } 

    cout << totalNumber;
}