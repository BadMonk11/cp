#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e9+7;

#include<bits/stdc++.h>
using namespace std;

lli binpow(lli a, lli b) {
    a %= N;
    lli res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % N;
        a = a * a % N;
        b >>= 1;
    }
    return res;
}
void solve(){
    lli n,k;
    cin>>n>>k;

    cout<<binpow(2,n-k)<<"\n";
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