#include<iostream>
#include<string>
using namespace std;

int main() {
    string word;
    cin >> word;

    int alphabet[26] = {0};

    for(int i=0;i<word.length();i++){ 
        word[i] = toupper(word[i]);

        alphabet[word[i]-'A'] += 1;
    }
    
    int answer=0;
    int flag=0;
    for(int i=0;i<26;++i){

        if(alphabet[answer] == alphabet[i] && answer != i){
            flag = 1;
        }

        if(alphabet[answer]<alphabet[i]){
            answer = i;
            flag = 0;
        }


    }

    cout << ((flag == 0) ? char('A'+answer) : '?');
}

    // '?'-'a' -34