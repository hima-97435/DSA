/*
Name - Himanshu Pokhriyal
Version - C++ 17
Date - 4 June , 2024


Ques-1 Combination Sum III
Link - https://leetcode.com/problems/combination-sum-iii/description/

class Solution {
public:
   vector<vector<int>> ans;
    int sum = 0;
    void dfs(vector<int>& cur, int k, int n, int idx)
    {
        if (cur.size() == k and sum == n)
        {
            ans.push_back(cur);
            return;
        }
        else if (cur.size() == k and sum > n) return;
        for (int i = idx; i <= 9; i++)
        {
            cur.push_back(i);
            sum += i;
            dfs(cur, k, n, i + 1);
            cur.pop_back();
            sum -= i;
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
      
        vector<int> ds;
        dfs(ds,k,n,1);
        return ans;
    }
};

Time complexity - O(2^t)*k
Space complexity - O(t*k)

Ques-2 Letter Combinations of a Phone Number
Link - https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

class Solution {
public:
    void solve(string digit,string output,int index, vector<string> &ans, string mapping[]){
        if( index >= digit.length()){
            ans.push_back(output);
            return ;
        }
        int number = digit[index]-'0';
        string value=mapping[number];
        for( int i=0;i<value.length();++i){
            output.push_back(value[i]);
            solve(digit,output,index+1,ans,mapping);
            output.pop_back();
        }


    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length() == 0) return ans;
        string output;
        int index=0;
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,mapping);
        return ans;
    }
};




*/