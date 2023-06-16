#include<iostream>
#include<string>
using namespace std;


int main() {
    int alphabetNumber[27];
    for(int i=0;i<26;i++){ alphabetNumber[i] = -1; }

    string arr;
    cin >> arr;


    for(int i=0;i<arr.length();i++){
        for(char c='a';c<='z';++c){
            if(c == arr[i] && alphabetNumber[c-'a'] == -1){ alphabetNumber[c-'a'] = i;}
        }
    }

    for(int i=0;i<26;i++){ cout << alphabetNumber[i] << " "; }
}