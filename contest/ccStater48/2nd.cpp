#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        
        int maxi=k*m;

        if(n%maxi==0){
            cout<<n/maxi<<"\n";
        }else{
            cout<<n/maxi+1<<"\n";
        }
    }
    return 0;
}