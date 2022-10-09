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
    string s;cin>>s;
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='4' or s[i]=='7') count++;
    }
    n=count;
    if(n==0){
        cout<<"NO"<<endl;
        return;
    }
    while(n){
        if(n%10==4 or n%10==7){
        }else{
            cout<<"NO"<<endl;
            return;
        }
        n/=10;
    }
    
    cout<<"YES"<<endl;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}