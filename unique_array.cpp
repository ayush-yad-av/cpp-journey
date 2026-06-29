#include<iostream>
using namespace std;
void unique(int arr[],int size){
    for (int i = 0; i < size; i++)
   {
     bool unique=true;
    for (int j = 0; j <size; j++)
    { 
        if (i!=j && arr[i]==arr[j])
        {
             unique=false;
            break;
            }
        
      }
      if (unique)
      {
        cout<<arr[i]<<" ";
      }
      
    }
}
int main(){
   int arr[]={1,2,3,4,1,2,3};
   int size = 7;
   unique(arr,size);
   
    return 0;
}