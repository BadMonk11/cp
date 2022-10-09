#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>> &v){
    if(v.size()!=0){
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }cout<<endl;
    }
    

}
int main()
{
    vector<pair<int,int>> v;

    v={{1,2},{4,0},{3,4}};
    print(v);

    sort(v.begin(),v.end(),[](pair<int,int> a,pair<int,int> b){return a.second<b.second;});
    print(v);

    return 0;
}