#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

int f(int n,vector<long long int> &dp){
    int N=1e9+7;
    if(n==0 or n==1) return 1;
    if(dp[n]!=-1) return dp[n];
    long long int left=f(n-1,dp);
    long long int right=f(n-2,dp);

    return dp[n]=(left+right)% N;
}
int countDistinctWays(int nStairs) {
    //  Write your code here.
    vector<long long int> dp(nStairs+1,-1);
    return f(nStairs,dp);
    
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