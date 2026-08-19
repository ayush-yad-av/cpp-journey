#include <iostream>
using namespace std;
int main(){
    string s = "programming";
    int l =s.length();
    int start=0,end=l-1;
     while (start<end)
     {
        swap(s[start],s[end]);
        start++;
        end--;
     }
     
   cout <<"length of string is = "<<l<<endl;
   cout<<"Reversed string is = " <<s<<endl;

    return 0;
}