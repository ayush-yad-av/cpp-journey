#include <iostream>
using namespace std;
int main(){
    string s = "mada";
    int l=s.length();
    int start=0,end=(l-1);
    for (int i = 0; i < l; i++)
    {
        if (s[start]!=s[end])
        {
            cout<<"Word is not a palindrome"<<endl;
            return 0;
        }
    }
    cout<<s<<" word is a palindrome"<<endl;
    return 0;
}