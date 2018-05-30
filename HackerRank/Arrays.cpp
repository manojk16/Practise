#include <iostream>
#include <vector>


using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
    	cin >> arr[arr_i];
    }
    cout << n<<endl;
    cout<<"Item-->"<<arr[n-1]<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}