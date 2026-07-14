#include <iostream>
using namespace std;
void intersection(int arr[],int num[],int sz){
      for (int i = 0; i < sz; i++)
      {
        for (int j = 0; j < sz; j++)
        {
            if (arr[i] ==  num[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
            
        }
        
      }
      
}
int main(){
    int sz=6;
    int arr[]={1,2,3,4,5,6};
    int num[]={1,2,4,7,8,9};
    intersection(arr,num,sz);
     return 0;
}