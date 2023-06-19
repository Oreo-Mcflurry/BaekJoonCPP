#include<iostream>
#include<string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int totalSize = word.length();

    for(int i=0;i<word.length();i++){
        if(word[i] == 'c' && (word[i+1] == '=' || word[i+1] == '-') ){
                totalSize--;
        } if(word[i] == 'd' && word[i+1] == 'z' && word[i+2] == '='){
                totalSize--;
        } if(word[i] == 'd' && word[i+1] == '-'){
                totalSize--;
        } if(word[i]== 'l' && word[i+1] == 'j'){
            totalSize--;
        } if(word[i]== 'n' && word[i+1] == 'j'){
            totalSize--;
        } if(word[i]== 's' && word[i+1] == '='){
            totalSize--;
        } if(word[i]== 'z' && word[i+1] == '='){
            totalSize--;
        }

    }

    cout << totalSize;

}