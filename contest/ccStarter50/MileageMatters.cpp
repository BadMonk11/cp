#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    int t;cin>>t;
    while(t--){
        int dis,x,y,a,b;
        cin>>dis>>x>>y>>a>>b;

        float cost_pitrol,cost_diseal;
        cost_pitrol=(dis/a)*x;
        cost_diseal=(dis/b)*y;
        if(cost_diseal>cost_pitrol) cout<<"PETROL\n";
        else if(cost_diseal<cost_pitrol) cout<<"DIESEL\n";
        else cout<<"ANY\n";
    }
    return 0;
}