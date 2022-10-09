#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second) return a.second<b.second;
    else {
        return a.first>b.first;
    }
}
int main()
{
    vector<pair<int,int>> v={
        {1,2},
        {2,1},
        {4,1}
    };
    
    sort(v.begin(),v.end(),comp);

    for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}