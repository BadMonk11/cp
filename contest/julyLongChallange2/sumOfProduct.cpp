#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==1 or n==0) return n;
    
    return n+sum(n-1);
}
int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    
	    vector<int> ans_vector;
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(v[i]==1){
	            count++;
	        }else{
	            ans_vector.push_back(count);
	            count=0;
	        }
	    }
	    ans_vector.push_back(count);
	    int ans=0;
	    for(int i=0;i<ans_vector.size();i++){
	        ans+=sum(ans_vector[i]);
	    }
	    cout<<ans<<"\n";
	    
	}
	return 0;
}

