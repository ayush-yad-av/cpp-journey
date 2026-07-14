#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>vec={1,2,3,4};
    int maximum=INT_MIN;
    //for printing vector and max element
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
        if (vec[i]>maximum)
        {
            maximum=vec[i];
        }
        
    }
    cout<<endl;
    cout<< "maximum element is "<< maximum<<endl;
    return 0;
}