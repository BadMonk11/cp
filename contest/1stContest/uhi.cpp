#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        
 
        
 
        for(int i=0;i<n;i++){
            nums[i]=(nums[i]+func(code[i],length[i]))%10;
        }
 
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" ";
        }cout<<endl;
    }
    return 0;
 
    
}