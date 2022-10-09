#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t=1;
	while(t--){
	    int n;cin>>n;
	    vector<int> v;
	    while(n){
	        int d=n%10;
	        v.push_back(d);
	        n=n/10;
	    }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }cout<<endl;
	}

	return 0;
}