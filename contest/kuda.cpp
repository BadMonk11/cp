#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void digitArr(int n,vector<lli> &v){
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
}
void solve(){
    int a,b;
    cin>>a>>b;
    
    vector<lli> v1;
    
}
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int t;cin>>t;
    // while(t--){
    //   solve();
    // }
    int n;cin>>n;
    vector<lli> v;
    digitArr(n,v);
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}