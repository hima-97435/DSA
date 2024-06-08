/*
Name - Himanshu pokhriyal
Date - 8 June , 2024
Version - c++ 17

Ques-1 N-Queens
Link - https://leetcode.com/problems/n-queens/description/

class Solution {
public:
    void solve(int col, vector < string > & board, vector < vector < string >> & ans, vector < int > & leftrow, vector < int > & upperDiagonal, vector < int > & lowerDiagonal, int n) {
      if (col == n) {
        ans.push_back(board);
        return;
      }
      for (int row = 0; row < n; row++) {
        if (leftrow[row] == 0 && lowerDiagonal[row + col] == 0 && upperDiagonal[n - 1 + col - row] == 0) {
          board[row][col] = 'Q';
          leftrow[row] = 1;
          lowerDiagonal[row + col] = 1;
          upperDiagonal[n - 1 + col - row] = 1;
          solve(col + 1, board, ans, leftrow, upperDiagonal, lowerDiagonal, n);
          board[row][col] = '.';
          leftrow[row] = 0;
          lowerDiagonal[row + col] = 0;
          upperDiagonal[n - 1 + col - row] = 0;
        }
      }
    }

public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for( int i=0;i<n;i++){
                board[i]=s;
        }
        vector<int> leftrow(n,0),upperDiagonal(2*n-1,0),lowerDiagonal(2*n-1,0);
        solve(0,board,ans,leftrow,upperDiagonal,lowerDiagonal,n);
        return ans;

    }
};

Time complexity - O(n!*n)
Space complexity - O(n)


Ques-2 Rat in a Maze Problem - I
Link - https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void findPathHelper(int i, int j, vector < vector < int >> & a, int n, vector < string > & ans, string move,
        vector < vector < int >> & vis) {
        if (i == n - 1 && j == n - 1) {
          ans.push_back(move);
          return;
        }
    
        // downward
        if (i + 1 < n && !vis[i + 1][j] && a[i + 1][j] == 1) {
          vis[i][j] = 1;
          findPathHelper(i + 1, j, a, n, ans, move + 'D', vis);
          vis[i][j] = 0;
        }
    
        // left
        if (j - 1 >= 0 && !vis[i][j - 1] && a[i][j - 1] == 1) {
          vis[i][j] = 1;
          findPathHelper(i, j - 1, a, n, ans, move + 'L', vis);
          vis[i][j] = 0;
        }
    
        // right 
        if (j + 1 < n && !vis[i][j + 1] && a[i][j + 1] == 1) {
          vis[i][j] = 1;
          findPathHelper(i, j + 1, a, n, ans, move + 'R', vis);
          vis[i][j] = 0;
        }
    
        // upward
        if (i - 1 >= 0 && !vis[i - 1][j] && a[i - 1][j] == 1) {
          vis[i][j] = 1;
          findPathHelper(i - 1, j, a, n, ans, move + 'U', vis);
          vis[i][j] = 0;
        }
    
      }    
        
    
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        vector<vector<int>> vis(n,vector<int>(n,0));
        
        if(m[0][0] == 1) findPathHelper(0,0,m,n,ans,"",vis);
        
        return ans;
        
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends

Time complexity - O(4^(m*n))
Space complexity - O(m*n)




*/