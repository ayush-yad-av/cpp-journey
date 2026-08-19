#include <iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int target = 40;
    int index =0;
    for(int val : arr){
        if (val==target)
        {
            cout<<"value found at index "<<index<<endl;
            return 0;
        }
        index++;
    }
    cout<<"value not found"<< endl;
    return 0;
}