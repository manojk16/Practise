    #include <bits/stdc++.h>
    #include <algorithm> 
    using namespace std;
    const int len=5;
    void miniMaxSum(long long int arr[]) { 
       long long int sum=0;
       long long int sum_arr[len];
        for(int i=0;i<len;i++){
            sum+=arr[i];
        }
        for(int i=0;i<len;i++){
            sum_arr[i]=sum-arr[i];
        }
        long long int max_sum=sum_arr[0];
        long long int min_sum=sum_arr[0];
        for(int i=0;i<len;i++){
            if(sum_arr[i]>max_sum){
                max_sum=sum_arr[i];
            }
            else if(sum_arr[i]<min_sum){
                min_sum=sum_arr[i];
            }
        }


            cout<<max_sum<<" "<<min_sum<<endl;
       
    }

    int main()
    {
        long long int arr[len];
        long long int num;
        for(int i=0;i<len;i++){
            cin>>num;
            arr[i]=num;
        }
        miniMaxSum(arr);
        return 0;
    }
