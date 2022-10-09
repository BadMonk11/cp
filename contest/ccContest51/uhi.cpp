#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
int main(){
    vi v{1,2,3};
    v.insert(v.end(),v.begin(),v.end());
    for(int x:v)cout<<x<<" ";
    cout<<endl;
    return 0;
}