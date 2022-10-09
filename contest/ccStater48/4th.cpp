#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int x=n%2;
        int y=m%2;

        if(x==0 and y==0){
            cout<<0<<"\n";
        }else if(x==0 or y==0){
            cout<<x*m+y*n<<"\n";
        }else{
            cout<<n+m-1<<"\n";
        }
    }
    return 0;
}