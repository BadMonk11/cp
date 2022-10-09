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
    string code,ans;
    cin>>code;

    int n=code.size();
    for(int i=0;i<n;i++){
        if(code[i]=='.'){
            ans.push_back('0');
        }else if(code[i]=='-' && code [i+1]=='.'){
            ans.push_back('1');
            i++;
        }else if(code[i]=='-' and code[i+1]=='-'){
            ans.push_back('2');
            i++;
        }
    }

    cout<<ans<<endl;
}
int main(){
    solve();
    return 0;
}