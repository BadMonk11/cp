#include<bits/stdc++.h>
using namespace std;
int nums[200];
int main()
{
    

    vector<int> v;

    v={1,2,3,4,5,6};    
    int n=v.size();
    for(int i=0;i<v.size();i++){
        cout<<"*"[i==n-1];
    }

    return 0;

    
}