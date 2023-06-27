#include<iostream>
#include<string>
using namespace std;

int main() {
    int n, m;  
    cin >> n >> m;

    int arr[n*2][m];
    for(int i=0;i<n*2;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << arr[i][j] + arr[i+n][j] << " ";
        }
        cout << endl;
    }

}