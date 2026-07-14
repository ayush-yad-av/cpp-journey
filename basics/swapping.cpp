// value swaping of variable using third variable
#include <iostream>
using namespace std;
int main() {
    int a, b, temporary;
    cout <<"enter value of a =";
    cin>>a;
    cout<<"enter value of b =";
    cin>>b;
    cout<<"before swaping value of \na ="<<a<<"\n";
    cout<<"b ="<<b <<"\n";
    temporary= a;
    a=b;
    b=temporary;
    cout<<"after swaping value of \na ="<<a<<"\n";
    cout<<"b ="<<b<<"\n";
    return 0;
}