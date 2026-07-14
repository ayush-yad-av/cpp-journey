#include <iostream>
using namespace std;
int main(){
    int number,reverse=0,remainder;
    cout<<"Enter a number to reverse :"<<endl;
    cin>>number;
    while (number>0)
    {
    remainder=number%10;
    number = number/10;
    reverse=reverse*10+remainder;
    }
    cout<<"Reverse of given number is :"<<reverse<<endl;
    return 0;
    
}