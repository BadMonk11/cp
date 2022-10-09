// #define int long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
void solve(){
    int x;cin>>x;
    if(x<=100) x;
    else if(x>100 and x<=1000) x-=25;
    else if(x<=5000) x-=100;
    else x-=500;

    cout<<x<<"\n";
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