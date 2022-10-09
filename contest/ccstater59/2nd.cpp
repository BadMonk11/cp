#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void solve(){
    vi v(3);
    for(int i=0;i<3;i++) cin>>v[i];
    int maxi=*max_element(v.begin(),v.end());
    // cout<<maxi<<endl;
    int index;
    for(int i=0;i<3;i++){
        if(v[i]==maxi) index=i;
    }

    if(index==0) cout<<"setter"<<endl;
    else if(index==1) cout<<"tester"<<endl;
    else if(index==2)cout<<"Editorialist"<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
       solve();
    }
    return 0;
}