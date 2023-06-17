#include<iostream>
#include<string>
using namespace std;

// 아 단어의 갯수가 아니라 띄어쓰기의 갯수를 세고 있었음 ㅋㅋㅋㅋ

int main() {
    
    string arr;
    getline(cin,arr);
    int count = 1;

    for(int i=0;i<arr.length();i++){ if(arr[i] == ' '){ count++; } }
    if(arr[0] ==  ' ') {count--;}
    if(arr[arr.length()-1] == ' ') {count--;}
   
    cout << count;
}