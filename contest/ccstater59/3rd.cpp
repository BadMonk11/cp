#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

bool condition(int i,string s){
    if((s[i]=='1') and (s[i+1]=='1') and (s[i+2]=='1')){
        return true;
    }
    return false;
}
void solve(){
    string s;cin>>s;
    int n=s.size();
    set<char> x={'a','e','i','o','u'};
    for(int i=0;i<s.size();i++){
        if(x.find(s[i])==x.end()){
            s[i]='0';
        }else{
            s[i]='1';
        }
    }
    for(int i=0;i<=n-3;i++){
        if(condition(i,s)){
            cout<<"happy"<<endl;
            return;
        }
    }
    cout<<"sad"<<endl;
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