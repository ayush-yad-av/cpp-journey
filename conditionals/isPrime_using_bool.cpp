#include <iostream>
using namespace std;
int main(){
    int number,i;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    bool isPrime=true;
    for (i=2;i<number;i++){
        if(number%i== 0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true){
        cout<<number<<" is a prime number"<<endl;
    }else{
        cout<<number<<" is a non prime number"<<endl;
    }
    
    return 0;
}