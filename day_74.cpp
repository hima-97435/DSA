/*
NAme - himanshu Pokhriyal
Version - c++ 17
date - 7 June , 2024


Ques-1 Palindrome Partitioning
Link - https://leetcode.com/problems/palindrome-partitioning/description/

class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> path;
        func(0,s,path,res);
        return res;
    }
    void func(int index,string s,vector<string> &path, vector<vector<string>> &res){

        if(index == s.size()){
            res.push_back(path);
            return;
        }
        for( int i=index;i<s.size();++i){
            if(ispalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                func(i+1,s,path,res);
                path.pop_back();
            }
        }
    }
    bool ispalindrome(string s,int start,int end){
        while(start<=end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }
};
Time complexity = O(2^n)*O(k)*O(n/2)
Space complexity = O(k*x)

Ques-2 Word Search
Link - https://leetcode.com/problems/word-search/description/

class Solution {
public:
    bool searchtext(vector<vector<char>> &board, string word, int row , int col , int index, int m , int n){
        if( index == word.length()){
            return true;

        }
        if( row < 0  || col<0 || row == m || col == n || board[row][col] != word[index] or board[row][col] == '!'){
            return false;
        }
        char c = board[row][col];
        board[row][col]='!';

        // top direction
        bool top = searchtext(board, word, row - 1, col, index + 1, m, n);
        // right direction
        bool right = searchtext(board, word, row, col + 1, index + 1, m, n);
        // bottom direction
        bool bottom = searchtext(board, word, row + 1, col, index + 1, m, n);
        // left direction
        bool left = searchtext(board, word, row, col - 1, index + 1, m, n);

        board[row][col]=c;

        return top||bottom||right||left;

    }

    bool exist(vector<vector<char>>& board, string word) {
        int m =board.size();
        int n =board[0].size();

        int index =0;

        for( int i=0;i<m;i++){
            for( int j=0;j<n;j++){
                    if(board[i][j] == word[index]){
                        if(searchtext(board,word,i,j,index,m,n)){
                            return true;
                        }
                    }
            }
        }
        return false;
    }
    
};

Time complexity - O(m*n*4^k)
Space complexity - O(k)




*/