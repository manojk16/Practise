#include <iostream>
#include <cstring>
#include <string>
#include <cstring>



using namespace std;



int filterstr(string str, string str1){
	int len=str.size()
	int count =0;
	
	for(int i=0;i<len;i++){
		if(strcmp(str,str1)){
			count++;
		}
	}
	return count;
}	



int main(){

	string str="abacdcaba";

	string str1="aba";


	int count=filterstr(str,str1);
	cout<<"Number of times of substring in to  string is"<<count<<endl;
}