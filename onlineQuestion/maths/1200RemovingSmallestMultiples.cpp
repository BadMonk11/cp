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
    string s(" ");
    for(int i=0;i<n;i++){
        char c;cin>>c;
        s.push_back(c);
    }
    string marked(n+1,'1');
    for(int i=1;i<=n;i++){
        if(s[i]=='0'){
            
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