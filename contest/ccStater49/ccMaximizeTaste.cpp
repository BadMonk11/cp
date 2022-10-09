#include<bits/stdc++.h>
                       
using namespace std;
int main(){
    
    
    int t;cin>>t;
    while(t--){
        int a,b,c,d;

        int first=0;
        if(a>=b){
            first=a;
        }else{
            first=b;
        }

        int second=0;
        if(c>=d){
            second=c;
        }else{
            second=d;
        }

        cout<<first+second<<"\n";
    }
    return 0;
}