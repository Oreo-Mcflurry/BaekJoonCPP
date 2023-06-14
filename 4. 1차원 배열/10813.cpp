#include<iostream>>
using namespace std;

int main(){
    cin.tie(NULL); 
    ios_base::sync_with_stdio(false);

    int arr[100];
    int n,m;

    cin >> n >> m;
    for(int i=1;i<=n;i++){
        arr[i-1] = i;
    }

    for(int i=0;i<m;i++){
        int a,b;

        cin >> a >> b;
        a--;
        b--;

        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}