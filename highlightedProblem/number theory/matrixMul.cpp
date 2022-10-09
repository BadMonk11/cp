#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define ii pair<int,int>
#define vi vector<int>
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
#define N 101
void MatrixMul(int a[][N],int b[][N],int n){
    int res[n][n];
    REP(i,n) REP(j,n){
        res[i][j]=0;
        REP(k,n) res[i][j]+=a[i][k]*b[k][j];
    }

    REP(i,n) REP(j,n) a[i][j]=res[i][j];
}
void printMatrix(int arr[][N],int n){
    REP(i,n) {
        REP(j,n) 
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
    int n;cin>>n;

    int A[N][N],B[N][N];
    REP(i,n) REP(j,n) cin>>A[i][j];
    REP(i,n) REP(j,n) cin>>B[i][j];

    MatrixMul(A,B,n);
    
    printMatrix(A,n);

    


    return 0;
}