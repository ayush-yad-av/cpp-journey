#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4,5};
    int n=vec.size();
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <=end; i++)
            {
                cout<<vec[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
    //time complexity o(n^3)
//Brute force approce
 int  maxSum=INT_MIN;
   for (int st = 0; st < n; st++)
{
    int currentSum=0 ;
    for (int end = st; end <n; end++)
    {
        currentSum +=vec[end];
        maxSum= max(currentSum,maxSum);
    }
    
}
cout<<"maximum subarray sum is = "<<maxSum<<endl;
//Time complexity o(n^2)

//kadane's Algorithm
// most optimised way of solving 
//Time complexity o(n), linear 
maxSum=INT_MIN;
int currentSum=0;
for (int i = 0; i < n; i++)
{
    currentSum+=vec[i];
    maxSum=max(maxSum,currentSum);
    if (currentSum<0)
    {
        currentSum=0;
    }
    
}
cout<<"max sum using kadane's Algo is = "<<maxSum<<endl;
}