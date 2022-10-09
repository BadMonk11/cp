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
        int n;cin>>n;
        
        deque<int> pool;
        for(int i=1;i<=n;i++){
            if(i%2) pool.push_front(i);
            else pool.push_back(i);
        }
        for(int i=0;i<n;i++){
            cout<<pool[i]<<" ";
        }
    }
    return 0;
}