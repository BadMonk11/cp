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
    int n;
    cin>>n;
    vi c(n),a,b;
    for(int i=0;i<n;i++) cin>>c[i];
    int flag=0;
    int temp=c[0];
    a.push_back(temp);
    for(int i=1;i<n;i++){
        if(flag==0 and c[i]<temp){
            a.push_back(c[i]);
        }
        else if(flag==0 and c[i]>temp){
            flag=1;
            b.push_back(c[i]);
        }else if(flag==1 and c[i]<temp){
            b.push_back(c[i]);
        }else if(flag==1 and c[i]>temp){
            flag=0;
            a.push_back(c[i]);
        }
    }
    
    if(a.size()==0 or b.size()==0){
        cout<<-1<<endl;
        return;
    }
    cout<<a.size()<<endl;
    for(int x:a) cout<<x<<" ";
    cout<<endl;
    cout<<b.size()<<endl;
    for(int x:b) cout<<x<<" ";
    cout<<endl;

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