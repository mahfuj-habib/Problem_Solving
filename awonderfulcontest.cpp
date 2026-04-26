#include<bits/stdc++.h>
using namespace std;
 
 
string result(vector<int>&arr){
    for(auto i : arr){
            if(i == 100){
                return "Yes";
            }
        }
        return "No";
}
 
int main(){
    int p;
    cin>>p;
    while (p--)
    {
        int l;
        cin>>l;
        vector<int>arr(l);
        for(auto &i : arr){
            cin>>i;
        }
        cout<<result(arr)<<endl;
    }
    
}