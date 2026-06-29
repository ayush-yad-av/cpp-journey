#include<iostream>
using namespace std;
void intersection(int arr[],int mark[],int size){
     for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i]==mark[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
            
        }
        
    }
}
int main(){  
    int arr[]={1,2,4,5,7},mark[]={1,3,4,6,7},size=5; 
    intersection(arr,mark,size);   
    return 0;
}