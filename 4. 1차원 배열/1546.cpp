#include<iostream>>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int m;
    cin >> m;

    double bigNum = 0;
    double totalNum = 0;
    for(int i =0;i<m;i++){
        int temp;
        cin >> temp;

        totalNum += temp;
        if(bigNum < temp) { bigNum = temp;}
    }

    cout << (totalNum/m)/bigNum*100;

}