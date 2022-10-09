#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    vi v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<m;i++) v.insert(v.end(),v.begin(),v.end());

    vi pre(n*m);
    for(int i=0;i<n*m;i++){
        pre[i]=accumulate(v.begin(),v.begin()+i,0);
    }
    vi suf(n*m);
    for(int i=0;i<n*m;i++){
        suf[i]=accumulate(v.begin()+i,v.end(),0);
    }

    int ans=0;
    for(int i=0;i<n*m;i++){
        if(pre[i]==suf[i]) ans++;
    }
    cout<<ans<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}