#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;
 void intTobinary(int n){
    vector<int> vect;    
    int count=0;
    int result=0;
    while(n){
        int remainder=n%2;
        vect.push_back(remainder);
        n=n/2;
    }

    vector<int>:: reverse_iterator rit;
    for(rit=vect.rbegin();rit!=vect.rend();++rit){
    	cout<<*rit<<" ";
    }
    	cout<<"\n";
    int len=vect.size();
    for(int i=0;i<len;i++){
    	if(vect[i]==0){
    		count=0;
    	}
    	else{
    		count++;
    		result=max(result,count);
    	}
    	//cout<<vect[i]<<" ";
    }
    cout<<"\n";
    cout<<"Count =="<<result<<endl;
     cout<<"\n";
}

/*void intTobinary(int n){
	if(n==0){
		return;
	}
	int r=n%2;
	intTobinary(n/2);
	cout<<r<<" ";

}*/


int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    intTobinary(n);

    return 0;
}
