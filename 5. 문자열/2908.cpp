#include<iostream>
#include<string>
using namespace std;

void swapNum(string &num){
    char temp = num[0];
    num[0] = num[2];
    num[2] = temp;
}

int main() {
    string num1, num2;
    cin >> num1 >> num2;

    swapNum(num1);
    swapNum(num2);
    
    cout << ((stoi(num1) > stoi(num2)) ? num1 : num2);
}