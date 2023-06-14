#include<iostream>>
#include<vector>
using namespace std;

int main(){
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);

    int n,m;
    cin >> n >> m;

    int arr[100] = {0};

    for(int i=0;i<m;i++){
        int a,b,c;
        cin >> a >> b >> c;

        for(int j=a-1;j<b;j++){
            arr[j] = c;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}