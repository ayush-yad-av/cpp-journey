#include<iostream>
using namespace std;
void min_max_swap(int arr[],int size){
    int mn=INT_MAX,mx=INT_MIN;
    int index1,index2;
   for (int i = 0; i < size; i++)
   {
    if (arr[i]<mn)
    {
        mn=arr[i];
        index1=i;
    }
    if(arr[i] > mx)
    {
        mx=arr[i];
        index2=i;
    }
   }
   swap(arr[index1],arr[index2]);
}

int main(){
   int arr[]={1};
   int size = 1;
   min_max_swap(arr,size);
   for (int i = 0; i < size; i++)
   {
    cout<<arr[i];
   }
   
   return 0;
}