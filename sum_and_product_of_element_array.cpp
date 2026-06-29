#include <iostream>
using namespace std;
void sum_product_of_array(int arr[],int size){
    int sum=0,product=1;
    for (int i = 0; i < size; i++)
    {
       sum+=arr[i];
       product*=arr[i];
    }
    cout<<"sum of elements is = "<<sum<<endl<<" product of elements is = "<<product;

}

int main(){
   int size=7;
   int arr[]={1,2,3,4,5,6,7};
   sum_product_of_array(arr,size);
    return 0;
}