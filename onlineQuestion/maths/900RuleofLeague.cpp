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
    // cout<<":"<<endl;
    int n,x,y;cin>>n>>x>>y;
    if(x>y) swap(x,y);
    if(x!=0){
        cout<<-1<<endl;
        return;
    }else{
        if(y==0){
            cout<<-1<<endl;
            return;
        }else{
            int k=(n-1)%y;
            if((n-1)%y){
                cout<<-1<<endl;
                return;
            }
            for(int i=2;i<=n;i+=y){
                for(int j=1;j<=y;j++){
                    cout<<i<<" ";
                }
            }cout<<endl;
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
