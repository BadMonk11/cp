#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    cout<<"\n";
}
bool order(int a,int b){
    return a>b;
}
int main()
{
    vector<int> v;
    v={2,2,6,5,7,3,8};
    print(v);
    sort(v.begin(),v.end(),order);
    print(v);
    return 0;
}