#include<bits/stdc++.h>
using namespace std;
int  main()
{

    long long m,n,a;
    cin>>m>>n>>a;
    long long m2=m/a;
    long long n2=n/a;
    if(m2%a>0 && n2%a>0)
    {
        m2++;
        n2++;
    }
    else if(m2%a>0 && n2%a==0)
    {
        m2++;
    }
    else if(m2%a==0 && n2%a>0)
    {
        n2++;
    }
 cout<<m2*n2;
 return 0;
}