#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        int mid=(x+y)/2;
        
        cout<<max(x,y)-mid<<"\n";
        
    }
    return 0;
}