#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
}


int main()
{
    vector<int> v(10,1);                                   //1st-arg=size,2nd-arg=value with which box is filled
    v[1]=4;
    printVector(v);
    return 0;
}