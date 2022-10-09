#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string vals[n];
        for(int i=0;i<n;i++){
            cin>>vals[i];
        }

        set<string> prime;
        for(int i=0;i<n;i++){
            
        }
        
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            auto pos=prime.find(vals[i]);
            if(pos!=prime.end()){
                ans[i]=1;
            }else{
                ans[i]=0;
            }
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }cout<<endl;
    }
    return 0;
}