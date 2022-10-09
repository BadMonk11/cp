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
    string s;cin>>s;
    int count=0;
    int i=1;
    while(i<s.size()){
        if(s[i]==s[i-1]){
            s.erase(i,1);
        }else{
            i++;
        }
    }
    cout<<n-s.size()<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
       solve();
    
    return 0;
}