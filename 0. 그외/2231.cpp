#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 0;

   for(int i=0;i<n;i++) {
        int temp = i;
        int i_size = (to_string(i).size());
        for(int j=0;j<i_size;j++) {
            temp += (i / static_cast<int>(pow(10,j)) % 10);
        }

        if(temp == n) {
            result = i;
            break;
        }
    }

    cout << result;
}