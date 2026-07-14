#include <iostream>
using namespace std;
void unique(int arr[],int sz){
    for (int i = 0; i < sz; i++)
    {
        bool unique=true;
        for (int j = 0; j < sz; j++)
        {
           if (arr[i] == arr[j] && i!=j)
           {
            unique=false;
            break;
           }
           
        }
       if(unique){
        cout<<arr[i]<<" ";
       } 
    }
    
}
int main(){
    int size=9;
    int arr[]={1,2,3,4,4,5,6,2,1};
    unique(arr,9);
    return 0;
}