#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;
bool isGood(int n){
    int digit=log(n)/log(10)+1;
    set<int> s;
    while(n){
        int x=n%10;
        s.insert(x);
        n/=10;
    }
    if(s.size()==digit) return true;
    return false;
}
void solve(){
    int n;cin>>n;
    int i=n+1;
    for(;!isGood(i);i++);
    cout<<i<<endl;

}
int main(){
    solve();
    return 0;
}