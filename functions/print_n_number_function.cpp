#include <iostream>
using namespace std;
void n_natural(int number){
    cout<<"First N Natural Numbers Are :"<<endl;
    for (int i = 1; i <= number; i++)
    {
        cout<<i<<" ";
    }
    
}
int main(){
    int N;
    cout<<"Enter value of N"<<endl;
    cin>>N;
    n_natural(N);
    return 0;
}