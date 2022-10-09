#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string su;
        cin>>su;

        transform(su.begin(), su.end(), su.begin(), ::toupper);
        if(su=="YES"){
            cout<<"YES"<<"\n";
        }else {
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}