#include<iostream>>
using namespace std;

int main(){
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);

    int bigNumber = -2147483648;
    int index = 0;

    for(int i=1;i<=9;i++){
    int temp;
    cin >> temp;

    if(bigNumber < temp){
        bigNumber = temp;
        index = i;
    }
    }


    cout << bigNumber << endl << index;
}