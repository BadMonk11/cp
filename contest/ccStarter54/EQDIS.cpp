#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;

    set<int> s;
    rep(i,n) {
        int x;cin>>x;
        s.insert(x)
    }
    
    if(s.size()==0 or s.size()%2) cout<<"no\n";
    else cout<<"yes\n";
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