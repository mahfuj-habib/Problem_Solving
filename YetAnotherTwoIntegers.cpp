#include<bits/stdc++.h>
using namespace std;
int solve(long long a,long long b)
{
    int x=abs(a-b)/10;
    if(abs(a-b)%10!=0)
    {
        x++;
    }
    return x;
}
int main()
{

    long long t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;;
    }
}
