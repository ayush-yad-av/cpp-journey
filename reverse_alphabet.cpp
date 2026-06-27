# include <iostream>
using namespace std;
int main(){
    int i,j,n;
    char ch ='A';
    cout<<"Enter value of n :";
    cin>>n;
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < ( i+1); j++)
      {
        cout<<ch;
        ch--;
      }
      ch+=(i+2);
      cout<<endl;
    }
    
    return 0;
  }