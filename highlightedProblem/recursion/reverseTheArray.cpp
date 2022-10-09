#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int l,int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverse(arr,l+1,r-1);
}
int main(){
    int arr[]{1,2,3,4,5};
    for(int x:arr) cout<<x<<" ";
    cout<<endl;

    reverse(arr,0,4);
    for(int x:arr) cout<<x<<" ";
    cout<<endl;

    return 0;
}