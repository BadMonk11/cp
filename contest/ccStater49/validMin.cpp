#include<bits/stdc++.h>
                       
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b or b==c or c==a){
            cout<<"Yes\n";
        }else{
            cout<<"No\n";
        }
        
    }
    return 0;
}