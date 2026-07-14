#include <iostream>
using namespace std;
int main(){
    float principal ,rate,time,interest;
    cout<<"enter principal amount =";
    cin>>principal;
    cout<<"enter rate of interest=";
    cin>>rate;
    cout<<"enter time in years =";
    cin>>time;
    interest=(principal*time*rate)/100;
    cout<<"simple interest ="<<interest<<endl;
    return 0;
}