// 킹 1, 퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8로 총 16개의 말

#include<iostream>
using namespace std;

int main() {

    int white[6] = {1, 1, 2, 2, 2, 8};
    int arr[6];
    for(int i=0;i<6;i++){
        int temp;
        cin >> arr[i];
    }

    for(int i=0;i<6;i++){
        cout << white[i] - arr[i] << " ";
    }
}