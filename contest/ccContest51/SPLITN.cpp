#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;

        vector<ll> bin;
        while(n){
            int rem=n%2;
            bin.push_back(rem);
            n/=2;
        }
        reverse(bin.begin(),bin.end());
        int x=count(bin.begin(),bin.end(),1);
        if(x==1 && x==2) cout<<1<<"\n";
        else cout<<0<<"\n";
    }
    return 0;
}