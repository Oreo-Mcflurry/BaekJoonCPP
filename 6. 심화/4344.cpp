#include<iostream>
using namespace std;

int main() {

    int classNum;
    cin >> classNum;
    
    double studentScore[classNum];
    int totalStudent = 0;
    int totalScore = 0;

    for(int i=0;i<classNum;i++){
        
        studentScore[i] = 0;
        int studnetNum;
        cin >> studnetNum;

       
        for(int j=0;j<studnetNum;j++){
            int temp;
            cin >> temp;
            studentScore[i] += temp;
        }

        studentScore[i] /= studnetNum;
    }

    for(int i=0;i<classNum;i++){
        cout << studentScore[i] << "%" << endl;
    }


}
