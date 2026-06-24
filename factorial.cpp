#include<iostream>
using namespace std;
int main(){
    int number,i,factorial=1;
    cout<<" Enter a number to find its factorial :"<<endl;
    cin>>number;
    for(i=1;i<=number;i++){
        factorial*=i;
    }
    cout<<"factorial of "<<number<<" is:"<<factorial<<endl;
    return 0;
}