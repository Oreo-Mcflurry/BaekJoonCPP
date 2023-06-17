#include<iostream>
#include<string>
using namespace std;


int main() {

    string final = "";

    while(true){
        string input;
        getline(cin, input);
		    if (cin.eof() == true) {
		    	break;
	    	}

        final.append(input);
        final.append("\n");
    }

    cout << final;
    
    
}