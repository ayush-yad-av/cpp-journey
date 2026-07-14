#include <iostream>
using namespace std;
int main(){
    int size=7;
    int arr[]={1,2,3,4,5,6,8};
    int target=7;
    bool notfound=true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==target)
        {
            cout<<"target is at index = "<<i<<endl;
            notfound=false;
            break;
        }
        
    }
    if (notfound)
    {
        cout<<"Target does not exist"<<endl;
    }
    
    
    return 0;
}