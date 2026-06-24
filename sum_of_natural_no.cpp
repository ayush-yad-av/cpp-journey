#include <iostream>
using namespace std;
int main(){
    int number,i,sum=0;
    cout<<"Enter number till which sum has to be calculated:"<<endl;
    cin>>number;
    for(i=1;i<=number;i++){
        sum+=i;
    }
    cout<<"sum of first "<<number<<" natural number is :"<<sum<<endl;
    return 0;
}