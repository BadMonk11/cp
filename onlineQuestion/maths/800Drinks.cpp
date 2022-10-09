#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vi v(n);
    rep(i,n) cin>>v[i];

    int x=accumulate(v.begin(),v.end(),0);
    float i=x*1.0/n;
    cout<<i<<endl;
}
int main(){
    solve();
    return 0;
}