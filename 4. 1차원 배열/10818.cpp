#include<iostream>>
using namespace std;

int main(){
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int bigNum = -1000001, smallNum = 1000001;

    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;        
        if (bigNum <= temp) { bigNum = temp; }
        if (smallNum >= temp) { smallNum = temp; }
    }


    cout << smallNum << " " << bigNum << endl;


}