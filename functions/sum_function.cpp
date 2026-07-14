#include<iostream>
using namespace std;
float sum(float a,float b){
   return (a+b);
}
int main(){
    float x,y;
    cout<<"Enter value of x:"<<endl;
    cin>>x;
    cout<<"Enter value of y"<<endl;
    cin>>y;
float sumation = sum(x,y);
cout<<"sum of "<<x <<" and "<<y<<" = "<<sumation<<endl;

    return 0;
}