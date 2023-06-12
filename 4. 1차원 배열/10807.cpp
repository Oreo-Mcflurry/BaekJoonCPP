#include<iostream>>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int v;
    cin >> v;

    int result = 0;
    for(int i=0;i<n;i++){
        if(v==arr[i]){ result++; } 
    }
    
    cout << result;

}