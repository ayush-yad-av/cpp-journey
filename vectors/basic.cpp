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
    //to take input n no
    cout<<"Enter value of n"<<endl;
    int n;
    cin>>n;
     for (int i = 0; i <  n; i++)
     {
        int val;
        cout<<"Enter value to be added in vector"<<endl;
        cin>>val;
        vec.push_back(val);
     }
     vec.pop_back();
     for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    /*reverse a vector*/
    int start=0,end=vec.size()-1;
    while (start<end)
    {
        swap(vec[start],vec[end]);
        start++;
        end--;
    }
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" ";
    }
    return 0;
}
