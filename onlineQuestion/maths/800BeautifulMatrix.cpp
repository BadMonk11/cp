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
    vector<vector<int>> v(5,vector<int> (5,0));
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
        }
    }
    int l,r;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(v[i][j]==1){
                l=i;
                r=j;
            } 
        }
    }
    cout<<abs(l-2)+abs(r-2)<<endl;
}
int main(){
    solve();
    return 0;
}