#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
 if(n%2!=0)
 {
    cout<<"NO";
    
 }
 else{
    vector<int>v;
    int sum=20;
    int tsum=0;
    int tcount=0;
    int vsum=0;
    int vcount=0;
    for(int i=2;i<n/2;i=i+2)
    {
        tcount++;
        if((n/2)-tcount==1)
        {
            v.push_back(sum-tsum);
        }
        v.push_back(i);
        int tsum=tsum+i;

    }
    for(int i=1;i<n/2;i=i+2)
    {
        tcount++;
        if((n/2)-vcount==1)
        {
            v.push_back(sum-vsum);
        }
        v.push_back(i);
    }
    cout<<"YES"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
 }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        solve(n);

    }
}