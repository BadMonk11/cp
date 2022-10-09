#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vi ans;
    int temp_max=n;
    int temp_min=1;
    bool maxi = true;
    for(int i=1;i<=n;i++){
        if(maxi){
            ans.push_back(temp_max--);
            maxi=false;
        }
        else {
            ans.push(temp_min++);
            maxi=true;
        }
    }
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