#define lli long long int
#define rep(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
const int N=1e5+7;

#include<bits/stdc++.h>
using namespace std;

void printChessBoard(vector<vector<int>> &board){
    int n=board.size();
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }
}
void pos(vector<ii> &ans,int x,int y){
    set<ii> d;
    d.insert({x-2,y-1});
    d.insert({x-2,y+1});
    d.insert({x-1,y+2});
    d.insert({x-1,y-2});
    d.insert({x+1,y-2});
    d.insert({x+1,y+2});
    d.insert({x+2,y-1});
    d.insert({x+2,y+1});

    for(auto it:d){
        int first =it.first;
        int second=it.second;

        if(first>0 and first<9){
            if(second>0 and second<9){
                ans.push_back(it);
            } 
        }
    }

}
void king(int x,int y){
    
}
void solve(){
    int x,y;cin>>x>>y;
    vector<vector<int>> board(9,vector<int> (9));
    board[x][y]=1;

    vector<ii> ans;
    pos(ans,x,y);


    printChessBoard(board);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--){
       solve();
    }

    
    
    return 0;
}