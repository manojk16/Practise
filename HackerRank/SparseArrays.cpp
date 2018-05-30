#include<iostream>
#include <string.h>
#include <vector>
#include <string>

using namespace std;


int main(){
	/*string str1="abcdefabc";
	string str2="abc";
*/
	string::size_type pos=0;
	int count=0;
	int n;
	cin>>n;
	string src_str,tgt_str;
	vector<string> str_vec;
	while(n){
		cin >> src_str;
		str_vec.push_back(src_str);
		n--;

	}

	int ns;
	cout<<"Enter\n";
	cin.ignore();
	cin >>ns;
	vector<string> tgt_vec;
	while(ns){
	cin>>tgt_str;
	tgt_vec.push_back(tgt_str);
	ns--;
	}
	int len_src=str_vec.size();
	int len_tgt=tgt_vec.size();
	std::vector<int> vect;
for(int i=0;i<len_src;i++){
	while ((pos = str_vec[i].find(tgt_vec[i], pos )) != std::string::npos){
		
		//vect[i]=++count;
		//cout<<vect[i];
		//cout<<tgt_vec[i];
		//pos+=tgt_vec[i].size();

		}
	}	
	// pos=str1.find(str1,pos);
	// pos+=str2.length();
	for(vector<int>::iterator it=vect.begin();it!=vect.end();++it){
		cout<<*it<<endl;
	}
}	

