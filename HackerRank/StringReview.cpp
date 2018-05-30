#include <iostream>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string str;
    int T;
    cin >> T;
    While(T){
    	cin >> str;
    	for(int i=0;i<str.length();i+=2){
    		cout<<str[i];
    	}
    	
    	cout<<"  ";
    	for(int j=1;j<str.length();j+=2){
    		cout<<str[j];
    	}
    	T--;

    	cout<<"\n";
    }	
    return 0;

    }
