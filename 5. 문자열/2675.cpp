#include<iostream>
#include<string>
using namespace std;


int main() {
    int t;
    cin >> t;

    for(int i=0;i<t;i++){

        int repeatChar;
        string arr;
        cin >> repeatChar >> arr;

            for(int j=0;j<arr.length();j++){
                for(int k=0;k<repeatChar;k++){ cout << arr[j]; }
            }
        cout << endl;
    }


}