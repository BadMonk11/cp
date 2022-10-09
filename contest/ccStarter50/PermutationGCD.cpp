#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        
        if(x<n){
            cout<<-1<<"\n";
            continue;
        }    

        else{
            int m=x-(n-1);
            cout<<m<<" ";
            for(int i=1;i<=n;i++){
                if(i==m) continue;
                else{
                    cout<<i<<" ";
                }
            }cout<<"\n";
        }
    }
    return 0;
}