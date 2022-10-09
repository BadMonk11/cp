#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        set<char> set;
        int ans=0;
        for(int i=0;i<n;i++){
            auto pos=set.find(s[i]);
            if(pos != set.end())
                ans++;
            else
                ans+=2;
                set.insert(s[i]);
        }

        cout<<ans<<"\n";


    }
    return 0;
}