#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int w,x,y,z;
    cin>>w>>x>>y>>z;

    set<int> s;
    s.insert(x+y);
    s.insert(y+z);
    s.insert(x+z);

    auto it=s.find(w);
    if(it==s.end()) cout<<"no\n";
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