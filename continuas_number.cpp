# include <iostream>
using namespace std;
int main(){
    int i,j,n;
    int number=1;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for ( i = 0; i <n; i++){
      for( j=0;j<(i+1);j++){
         cout<<number<<" ";
         number++;
        }
         cout<<endl;
      }
    return 0;
  }