#include <iostream>
using namespace std;
bool isOdd(int number){
        return number%2 != 0;
}
int main(){
    int number;
    cout<<"Enter Number"<<endl;
    cin>>number;
    if (isOdd( number))
    {
        cout<<number<<" is odd"<<endl;
    }else{
        cout<<number<<" is even";
    }
    
    return 0;
} 