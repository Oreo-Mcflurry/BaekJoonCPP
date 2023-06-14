#include<iostream>>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cin.tie(NULL); //입출력 묶음 해제
    ios_base::sync_with_stdio(false);

    vector<int> v;
    for(int i=0;i<10;i++){
        int temp;
        cin >> temp;

        v.push_back(temp%42);
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << v.size();
}