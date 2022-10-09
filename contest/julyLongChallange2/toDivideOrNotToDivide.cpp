#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    long long  A,B,N;
	    cin>>A>>B>>N;
	    
	    if(A%B==0){
	        cout<<-1<<"\n";
	    }
	    else{
	        // if(N%B==0){
	        //     cout<<(N/A+1)*A<<"\n";
	        // }else{
	        //     cout<<(N/A+1)*A<<"\n";
	        // }
            if(N%A==0 and N%B==0){
                cout<<N+A-(N%A)<<"\n";
            }else if(N%A==0){
                cout<<N<<"\n";
            }
	    }
	}
	return 0;
}
