#include <iostream>
using namespace std;
int main(){
    int arr[]= {2,2,1,1,1,2,2};
    int candidate=0;
    int count=0;
 
    int n= sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < n; i++)
   {
    if (count==0)
    {
        candidate=arr[i];
    }
    if (arr[i]==candidate)
    {
        count++;
    }else{
        count--;
    }
   }
   count=0;
   for (int i = 0; i < n; i++)
   {
    if (candidate==arr[i])
    {
        count++;
    }
   }
    if (count>(n/2))
    {
         cout<<"majority element is "<<candidate<<endl;
    }else{
        cout<<"Majority element not found"<<endl;
    }
    
    return 0;
}