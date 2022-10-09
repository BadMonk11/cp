#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void convert(string &s){
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            s[i]='0';
            if((s[i-1]=='0' and)) s[i-1]='1';
            if(s[i+1]=='0') s[i+1]='1';
        }
    }
}
void solve(){
    int n,k;cin>>n>>k;

    string s;cin>>s;
    for(int i=1;i<=k;i++){
        convert(s);
    }
    cout<<s<<endl;
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