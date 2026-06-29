#include <iostream>
using namespace std;
int factorial(int number){
    int fact=1;
   for (int i = 1; i <= number; i++)
   {
    fact*=i;
   }
  return fact;
}
int main(){
    int number;
    cout<<"ENTER NUMBER :"<<endl;
    cin>>number;
    int facto=factorial(number);
    cout<<"factorial of "<<number<<" = "<<facto<<endl;
    return 0;
}