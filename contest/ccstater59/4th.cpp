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
    string s;
    cin>>s;
    deque<char> t;
    int i(0),j(n-1);
    while(i<j){
        if(s[i]=='0'){
            t.push_front('0');
        }else{
            t.push_back('1');
        }
        if(s[j]=='0'){
            t.push_back('0');
        }else{
            t.push_front('1');
        }
        i++;
        j--;
    }
    if(i==j){
        if(s[i]=='0'){
            t.push_front('0');
        }else{
            t.push_back('1');
        }
    }
    for(int i=0;i<t.size();i++){
        cout<<t[i];
    }cout<<endl;
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