#include<bits/stdc++.h>

using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int N;
        cin>>N;

        string first;
        cin>>first;

        string last;
        cin>>last;
        int first_count=0,last_count=0;
        for(int i=0;i<N;i++){
            if(first[i]=='1') first_count++;
            if(last[i]=='1') last_count++;
        }

        if(first_count%2==last_count%2){
            cout<<1<<"\n";
        }else{
            cout<<0<<"\n";
        }
    }
    return 0;
}