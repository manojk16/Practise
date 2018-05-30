#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void plusMinus(vector<int> arr) {
    /*
     * Write your code here.
     */
    int countNegative=0;
    int countZero=0;
    int countPositive=0;
    int len= arr.size();
    for(int i=0;i<len;i++){
        if(arr[i]<0){
            countNegative+=1;
        }
        else if(arr[i]==0){
            countZero+=1;
        }
        else if(arr[i]>0){
            countPositive+=1;
        }
    }

    cout <<countPositive<<"+++"<<endl;
    cout <<countNegative<<"---"<<endl;
    cout <<countZero<<"zero"<<endl;
    cout<<"Array Size is ::"<<len<<endl;

    double NegativeFraction=(static_cast<double>(countNegative)/len);
    double ZerosFraction=(static_cast<double>(countZero)/len);
    double PositiveFraction=(static_cast<double>(countPositive)/len);
    

        cout << NegativeFraction<<endl;     

    cout<<fixed;
    cout<<setprecision(6)<<NegativeFraction<<endl;
    cout<<setprecision(6)<<ZerosFraction<<endl;
    cout<<setprecision(6)<<PositiveFraction<<endl;
    
}


int main(){

	vector<int> arr;

	arr.push_back(-4);
	arr.push_back(3);
	arr.push_back(-9);
	arr.push_back(0);
	arr.push_back(4);
	arr.push_back(1);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<"\t";
	}
    cout<<"\n";
	plusMinus(arr);


}