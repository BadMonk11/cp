#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;


int main(){
    map<int,int> m;

    m[1]=3;
    m[2]++;

    for(auto pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }

    auto it=m.find(2);
    
    if(it!=m.end()) cout<<it->first<<" "<<it->second<<endl;
    else cout<<"not found\n";

    auto it1=m.find(3);

    if(it1!=m.end()) cout<<it1->first<<" "<<it1->second<<endl;
    else cout<<"not found\n";
    return 0;
}