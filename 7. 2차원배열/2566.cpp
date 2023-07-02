#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main() {
    int max=0, x, y;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            int temp;
            cin >> temp;

            if(temp>=max){
                max = temp;
                x = i+1;
                y = j+1;
            }
        }
    }

    cout << max << endl << x << " " << y;


}