#include <iostream>
#include <vector>


using namespace std;

void leftRotate(vector<int> arr, int d){
	int temp;
	int n=arr.size();
	for(int i=0;i<d;i++){
		for(int j=0;j<n;j++){
			temp=arr[0];
			arr[j]=arr[j+1];
		}
		arr[n]=temp;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
}
int main(){
	cout <<"Enter The Number of Element need to Enter In to Array\n";
	int n;
	cin>>n;
	cout <<"Enter The Left Rotation\n";
	int d;
	cin >> d;

	std::vector<int> arr;

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout << "Given Array is\n";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	leftRotate(arr,d);
	return 0;
}