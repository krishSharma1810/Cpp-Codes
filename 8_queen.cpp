#include<iostream>
#include<vector>
using namespace std;



bool isSafe(int col,int row,vector<vector<int>> &board,int n){
    int x=row;
    int y=col;

    while(col>=0){
        if (board[x][y]==1){
            return false;
        }
        y--;
    }


    x=row;
    y=col;
    while(x>=0 && y>=0){
        if (board[x][y]==1){
            return false;
        }
        y--;
        x--;
    }

    x=row;
    y=col;
    while(x<n && y>=0){
        if (board[x][y]==1){
            return false;
        }
        y--;
        x++;
    }
    return true;
}

void addsolution(vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    vector<int> temp;
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            temp.push_back(board[i][j]);
        }
    }
    ans.push_back(temp);
}

void solve(int col,vector<vector<int>> &ans,vector<vector<int>> &board,int n){
    if (col==n){
        // addsolution(ans,board,n);
        for (int i=0;i<n;i++){
            for (int j=0;j<n;j++){
                cout <<board[i][j]<<" ";
            }
            cout<< endl;
        }
        cout <<endl;
        return;
    }

    for(int row=0;row<n;row++){
        if (isSafe(row,col,board,n)){
            board[row][col]=1;
            solve(col+1,ans,board,n);
            // for backtrack
            board[row][col]=0;
        }
    }
}


int main(){
    int n=4;
    // this line creates a 2D vector named board with dimensions n x n. Each element of the outer vector 
    // (representing a row) is a separate inner vector of size n, and all elements in the inner vectors are 
    // initialized to 0.
    vector<vector<int>> board(n,vector<int>(n,0));
    vector<vector<int>> ans;
    solve(0,ans,board,n);

    return 0;
}