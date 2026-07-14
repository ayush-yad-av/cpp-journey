# include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    for ( i = n; i >0; i--){
      for( j=0;j<i;j++){
         cout<<" ";
        }
         cout<<endl;
      }
    return 0;
  }