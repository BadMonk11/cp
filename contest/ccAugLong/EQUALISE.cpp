#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back

#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;

int CountTrailingZeros(int n)
{
    // declare bitset of 64 bits
    bitset<64> bit;
 
    // set bitset with the value
    bit |= n;
 
    int zero = 0;
 
    for (int i = 0; i < 64; i++) {
        if (bit[i] == 0)
            zero++;
        // if '1' comes then break
        else
            break;
    }
 
    return zero;
}
void solve(){
    int a,b;
    cin>>a>>b;

    int n1=CountTrailingZeros(a);
    int n2=CountTrailingZeros(b);

    for(int i=1;i<=n1;i++){
        a/=2;
    }
    for(int i=1;i<=n2;i++){
        b/=2;
    }

    if(a==b) cout<<"yes\n";
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