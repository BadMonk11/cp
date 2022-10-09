#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

bool isSubset(vi arr1[], vi arr2[])
{
    int n=arr1.size();
    int m=arr2.size();
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
 
        /* If the above inner loop was
        not broken at all then arr2[i]
        is not present in arr1[] */
        if (j == m)
            return 0;
    }
 
    /* If we reach here then all
    elements of arr2[] are present
    in arr1[] */
    return 1;
}
void solve(){
    int n;cin>>n;
    vector<vector<int>> s(n);
    rep(i,n){
        int k;cin>>k;
        rep(j,k){
            int x;cin>>x;
            s[i].push_back(x);
        }
    }

    pair<int,int> p={0,0};
    for(int i=0;i<n;i++){
        if(s[i].size()>p.first){
            p.first=s[i].size();
            p.second=i;
        }
    }
    
    if(p.first<3){
        cout<<"no\n";
        return;
    }
    vector<int> v{1,2,3,4,5};
    for(int i=0;i<p.first;i++){
        auto it=find(v.begin(),v.end(),s[p.second][i]);
        v.erase(it);
    }

    bool flag=false;
    for(int i=0;i<n;i++){
        flag=isSubset(v,s[i]);
        if(flag==true) break;
    }
    if(flag==true) cout<<"yes\n";
    else cout<<"no\n";

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