#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vlli vector<lli>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void solve(){
    lli n;
    cin>>n;

    vlli a(n),b(n);
    for(lli i=0;i<n;i++) cin>>a[i];
    rep(i,n) cin>>b[i];

    lli sumA=accumulate(a.begin(),a.end(),0);
    lli sumB=accumulate(b.begin(),b.end(),0);

    if(sumA!=sumB){
        cout<<-1<<"\n";
        return;
    } 
    lli count=0;
    for(lli i=0;i<n;i++) if(a[i]==b[i]) count++;
    cout<<count<<"\n";


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