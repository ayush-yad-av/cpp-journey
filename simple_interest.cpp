#include <iostream>
using namespace std;
int main(){
    float p ,r,t,st;
    cout<<"enter principal ammount =";
    cin>>p;
    cout<<"enter rate of interest=";
    cin>>r;
    cout<<"enter time in years =";
    cin>>t;
    st=(p*t*r)/100;
    cout<<"simple interest ="<<st<<endl;
    return 0;
}