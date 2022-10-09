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
    int n,c;cin>>n>>c;

    map<int,int> m;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        m[x]++;
    }
    int count(0);
    for(auto it=m.begin();it!=m.end();it++){
        count+=min(c,it->second);
    }
    cout<<count<<"\n";
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