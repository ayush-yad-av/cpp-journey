#include <iostream>
using namespace std;
float max(float a, float b,float c){
    if(a>=b &&a>=c){
        return a;
    }else if(b>=a && b>=c){
        return b;
    }else {
        return c;
    }
}
int main(){
    float a,b,c ,maximum ;
    cout<<"Enter value of a, b and c "<<endl;
    cin>> a;
    cin>>b;
    cin>>c;
    maximum= max(a,b,c);
    cout<<"max value is :"<<maximum<<endl;
    return 0;
}