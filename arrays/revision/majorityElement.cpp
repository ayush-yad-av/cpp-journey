#include <iostream>
using namespace std ;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (count>(n/2))
        {
            cout<< arr[i]<<" is majority element ."<<endl;     
            return 0 ;
           }else{
            count=0;
           }
        
    }
    cout<<"No majority element has been found"<<endl;
    

    return 0;
}