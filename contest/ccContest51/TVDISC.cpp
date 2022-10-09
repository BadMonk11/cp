#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int A=a-c;
        int B=b-d;

        if(A==B) cout<<"Any"<<"\n";
        else if(A>B) cout<<"first"<<"\n";
        else cout<<"second\n";
    }
    return 0;
}