#include<bits/stdc++.h>
using namespace std;
int power(int base,int pow){
    int result=1;

    while(pow){
        if(pow % 2!=0){
            result*=base;
            pow--;
        }else{
            base*=base;
            pow/=2;
        }
    }

    return result;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;

    cout<<power(a,b);
    return 0;
}