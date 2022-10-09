#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;

    return gcd(b,a%b);
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b;
        cin>>a>>b;

        cout<<gcd(a,b)<<endl;
    }
    return 0;
}