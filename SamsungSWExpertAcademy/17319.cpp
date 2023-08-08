#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main() {
   int t;
   cin >> t;
   for(int i=1;i<=t;i++){
    int n;
    string temp;

    cin >> n >> temp;

    if(n%2==1){
        cout << "#" << i << " No" << endl;
    } else { 
    int flag = 0;
    for(int j=0;j<n/2;j++){
        if(temp[j] != temp[j+n/2]) {
            cout << "#" << i << " No" << endl;
            flag = 1;
            break;
        }
    }   // for j
    if(flag == 1) { continue;; }
    cout << "#" << i << " Yes" << endl;
    
    }   // else
   }    // for i
}