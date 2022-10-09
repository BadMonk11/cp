#include<bits/stdc++.h>
using namespace std;
int main(){
    typedef long long ll;
    
    int t;cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        
        ll d=0;
        pair<ll,ll> ans;
        if(n*n<m){
            for(int i=n;i*i<m;i++){
                ll x=m-(m%i);
            
                if(d<=x-i){
                    d=x-i;
                    ans={i,x};
                }
            }
        }else{
            for(ll i=n;i<=m;i++){
                ll x=m-(m%i);
                
                if(d<=x-i){
                    d=x-i;
                    ans={i,x};
                }
            }
        } 
        
        
         
        cout<<ans.first<<" "<<ans.second<<"\n";   
    }
    return 0;
}