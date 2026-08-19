#include <iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz= sizeof(arr)/4;
    int start=0,end=(sz-1);
        while (start<end)
        {
            int x =arr[end];
            arr[end]=arr[start];
            arr[start]= x;
            start++;
            end--;
        };
        
    cout<<"new array is = ";
    for(int val: arr){
        cout<<val<<" ";
    }
    cout <<endl;
    return 0;
}