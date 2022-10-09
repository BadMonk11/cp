#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int x,y,n,r;
        cin>>x>>y>>n>>r;
        // The first and only line of each test case contains four space-separated integers XX, YY, NN and RR — the cost of a normal burger, the cost of a premium burger, the number of burgers Chef wants to buy and the amount of money Chef has.
        
        int Nx=n,Ny=0;
        if(Nx*x+Ny*y>r){
            cout<<-1<<"\n";
            continue;
        }
        while(Nx*x+Ny*y<=r and (Nx<=n and Ny<=n)){
            Nx--;
            Ny++;
        }
        cout<<++Nx<<" "<<--Ny<<"\n";
    }
    return 0;
}