#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
    string word;
    cin >> word;

    stack<char> st;

    for(int i=0;i<(word.length()/2);i++){
        st.push(word[i]);
    }
    for(int i= ((word.length()%2) == 0 ? (word.length()/2) : ((word.length()/2)+1));i<word.length();i++){
        char temp = st.top();
        st.pop();
        if(temp != word[i]) {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
  
}