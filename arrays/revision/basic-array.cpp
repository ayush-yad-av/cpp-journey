#include <iostream>
using namespace std ;
int main(){
    // find the minimum and maximum element
    int max= INT_MIN;
    int min = INT_MAX;
    int arr[] = {4, 7, 2, 9, 1, 6};
    
   for(int val : arr){
    if (max<val)
    {
      max=val;
    }
    if (min>val)
    {
        min=val;
    }
   }
    cout<<" min value in array is = " <<min<<endl;
    cout<< " max vaue in array is = " <<max<<endl;

    return 0;
}