
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int priv2=0;
        int priv=1;

        for(int i=2;i<=n;i++){
            int curr=priv+priv2;
            priv2=priv;
            priv=curr;
        }
        cout<< priv<<"\n";
    }
    


    return 0;
}