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
    if(n%2==1){
        cout<<-1<<endl;
        return;
    }
    int i=n;
    while(i>=1){
        cout<<i<<" ";
        i--;
    }
    cout<<endl;
}
int main(){
    solve();
    return 0;
}