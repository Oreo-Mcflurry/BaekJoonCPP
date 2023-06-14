#include<iostream>>

using namespace std;

int main(){
    int n, m;
    int arr[100];
    cin >> n >> m;

    for(int i=1;i<=n;i++){
        arr[i-1] = i;
    }
   
    
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        a--;
        b--;

        for(int j=0;j<((b-a)/2+1);j++){
            int temp = arr[a+j];
            arr[a+j] = arr[b-j];
            arr[b-j] = temp;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}