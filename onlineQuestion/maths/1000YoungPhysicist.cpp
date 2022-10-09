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

    vector<vector<int>> v(n,vector<int> (3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>v[i][j];
        }
    }
    vector<int> ans(3);
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            ans[i]+=v[j][i];
        }
    }
    int flag=0;
    for(int x:ans){
        if(x!=0) flag=1;
    }

    if(flag==1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main(){
    solve();
    return 0;
}