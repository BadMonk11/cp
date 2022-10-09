#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;
void convert(string &s,int flag){
    if(flag>=0){
        for(int i=0;i<s.size();i++){
            if(s[i]<'a') s[i]=(s[i]-'A')+'a';
        }
    }else{
        for(int i=0;i<s.size();i++){
            if(s[i]>='a') s[i]=(s[i]-'a')+'A';
        }
    }
}
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]>='a') flag++;
        else flag--;
    }
    convert(s,flag);
    cout<<s<<endl;

}
int main(){
    solve();
    return 0;
}