#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
void solve(){
    int n;cin>>n;
    vi time(n);
    for(int i=1;i<=n-1;i++){
        cin>>time[i];
    }
    vi A(n+1);
    A[1]=0;
    for(int i=2;i<=n;i++){
        A[i]=A[i-1]+time[i-1];
    }

    int ans=2*time[1];
    for(int i=3;i<=n;i++){
        int wt=0;
        if(A[i]>ans){
            wt=A[i]-ans;
        }
        ans+=wt+time[i-1];
    }
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
       solve();
    }
    
    return 0;
}