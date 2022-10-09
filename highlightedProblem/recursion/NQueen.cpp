#define lli long long int
#define rep(i, n) for (int i = 0; i < n; i++)
#define ii pair<int, int>
#define vi vector<int>
#define pb push_back
const int N = 1e5 + 7;

#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<string> &board, int n, int row, int col)
{
    int dupRow = row;
    int dupCol = col;

    while (col >= 0 and row >= 0)
    {
        if(board[row][col] =='Q') return false;
        col--;
        row--;
    }

    row=dupRow;
    col=dupCol;

    while(col>=0){
        if(board[row][col] =='Q') return false;
        col--;
    }

    row=dupRow;
    col=dupCol;

    while(row<=n-1 and col>=0){
        if(board[row][col] =='Q') return false;
        row++;
        col--;
    }

    return true;
}
void printBoard(vector<string> &board){
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            cout<<board[i][j]<<" ";
        }cout<<endl;
    }
}

int main()
{
    int n;cin>>n;
    vector<string> board(n,"----");
    printBoard(board);
    return 0;
}