#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;
int findMostFrequentElement(vi A)
{
    int n=A.size();
    sort(A.begin(),A.end());       
    //finnd the most occuring element
    int max_count = 1, res = A[0], count = 1; 
    for (int i = 1; i < n; i++) { 
        if (A[i] ==A[i - 1]) 
            count++; 
        else { 
            if (count > max_count) { 
                max_count = count; 
                res = A[i - 1]; 
            } 
            count = 1; 
        } 
    }   
    // If last element is most frequent 
    if (count > max_count) 
    { 
        max_count = count; 
        res = A[n - 1]; 
    }   
    return res; //return the most repeatinng  element
}
void solve(){
    int n;
    cin>>n;

    vi arr(n);
    rep(i,n) cin>>arr[i];

    int maxElement=findMostFrequentElement(arr);
    if(count(arr.begin(),arr.end(),maxElement)>(n+1)/2) cout<<"no\n";
    else cout<<"yes\n";
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