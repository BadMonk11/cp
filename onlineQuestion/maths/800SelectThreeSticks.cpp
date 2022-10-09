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
    for(int i=0;i<n;i++){
        cin>> v[i];
    }

    sorted(v);
    int operation(INT_MAX);
    for(int i=0;i<=n-3;i++){
        int temp=v[i+2]-v[i];
        operation=min(operation,temp);
    }
    cout<<operation<<"\n";
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