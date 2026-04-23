#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2="";
        cin>>s1;
        for(auto i: s1)
        {
            s2+=tolower(i);//only wworks on character
        }
        if(s2=="yes")
        {
            cout<<"YES"<<endl;
        }
        else{cout<<"NO"<<endl;}
    }
}