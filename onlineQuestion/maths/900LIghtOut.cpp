#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define sorted(v) sort(v.begin(),v.end())
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;
bool valid_pair(int i,int j){
    if(i>=0 and i<3){
        if(j>=0 and j<3){
            return true;
        }
    }
    return false;
}
void toggle(vector<vector<int>> &board,int i,int j){
    if(board[i][j]==1) board[i][j]=0;
    else board[i][j]=1;
}
void solve(){
    vector<vector<int>> board{{1,1,1},{1,1,1},{1,1,1}};
    vector<vector<int>> v(3,vector<int>(3));
    rep(i,3){
        rep(j,3){
            cin>>v[i][j];
            v[i][j]%=2;
        }
    }
    rep(i,3){
        rep(j,3){
            if(v[i][j]==1){
                toggle(board,i,j);
                if(valid_pair(i-1,j)) toggle(board,i-1,j);
                if(valid_pair(i+1,j)) toggle(board,i+1,j);
                if(valid_pair(i,j-1)) toggle(board,i,j-1);
                if(valid_pair(i,j+1)) toggle(board,i,j+1);
            }
        }
    }
    rep(i,3){
        rep(j,3){
            cout<<board[i][j];
        }
        cout<<endl;
    }
}
int main(){
    solve();
    return 0;
}