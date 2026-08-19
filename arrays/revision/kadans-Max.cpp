#include <iostream>
using namespace std;
int main(){
    int arr[] = {-2 , 1  ,-3,  4  ,-1 , 2  ,1 , -5 , 4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxSum= INT_MIN;
     int currentsum=0;
    for (int st = 0; st < n; st++)
    {     
        currentsum+=arr[st];
        maxSum=max(maxSum,currentsum);
        if (currentsum<0)
        {
            currentsum=0;
        }
        
        
        
    }
    cout<<"Maximum subarray Sum is = "<<maxSum<<endl;
    

    return 0;
}