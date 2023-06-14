#include<iostream>>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    for(int i=1;i<=30;i++){
        arr.push_back(i);
    }

    for(int i=0;i<28;i++){
        int temp;
        cin >> temp;

        arr[temp-1] = 0; 
    }

    for(int i=0;i<30;i++){
        if(arr[i] != 0) { cout << arr[i] << " ";}
    }
}
    // arr.erase(remove(arr.begin(), arr.end(), 0), arr.end());

    // cout << arr[0] << endl << arr[1];