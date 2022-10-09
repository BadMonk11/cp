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
    for(int i=0;i<n;i++) cin>>v[i];
    
    int h=0,l=n-1;
    int i=0;
    while(i<n){
        if(v[i]>v[h]) h=i;
        if(v[n-1-i]<v[l]) l=n-1-i;

        i++;
    }
    // cout<<l<<" "<<h<<endl;
    if(h<l){
        cout<<h+(n-1-l)<<endl;
    }else{
        cout<<h+(n-l-1)-1<<endl;
    }
}
int main(){
    solve();
    return 0;
}