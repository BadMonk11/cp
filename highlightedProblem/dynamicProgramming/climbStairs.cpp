#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

int f(int n,vi &dp){
    if(n==0 or n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    int left=f(n-1,dp);
    int right=f(n-2,dp);

    return dp[n]=left+right;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vi dp(n+1,-1);

        cout<<f(n,dp)<<"\n";
    }
    return 0;
}