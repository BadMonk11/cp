#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

vi f(int s,int index,vi arr,vi &ref){
    if(s==0) return arr;

    arr.push_back(ref[index]);
    f(s)
}
int main(){
    
}