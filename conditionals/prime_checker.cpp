#include <iostream>
using namespace std;
int main(){
    int number,i;
    cout<<"Enter a number:"<<endl;
    cin>>number;
    for(i=2;i<number;i++){
        if(number%i== 0){
            cout<<number<<" is not a prime number"<<endl;
            break;
        }else{
            cout<< number<<" is a prime number"<<endl;
        }
    }
    return 0;
}