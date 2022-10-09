#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;

    vi count1(n);
    rep(i,n){
        int x;cin>>x;
        count1[x]++;
    }

    int maxi=*max_element(count.begin(),count.end());
    int freq=count(count1.begin(),count1.end(),maxi);
    if(maxi!=1) cout<<"no\n";
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