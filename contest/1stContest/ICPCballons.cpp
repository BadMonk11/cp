
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        v.push_back(x);
	    }
	    
	    set<int> s={1,2,3,4,5,6,7};
		int problem=0;
	    while(s.size()!=0){
			auto it=s.find(v[problem]);
			if(it!=s.end()){
				s.erase(*it);
			}
			problem++;
		}
		cout<<problem<<endl;
	}
	return 0;
}
