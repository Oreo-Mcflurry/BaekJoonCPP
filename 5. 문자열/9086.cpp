#include<iostream>
#include<string>
using namespace std;


int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        string arr;
        cin >> arr;

        cout << arr[0] << arr[arr.length()-1] << endl;
    }
    
   
}