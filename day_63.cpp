/*
Name - Himanshu Pokhriyal
Date - 27 May , 2024
Version - C++17

Ques-1 Print all subsequences/Power Set
Link - https://leetcode.com/problems/subsets/description/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        
        // Iterate over all possible combinations (2^n)
        for (int i = 0; i < (1 << n); i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                // Check if the j-th bit is set in i
                if (i & (1 << j)) {
                    subset.push_back(nums[j]);
                }
            }
            ans.push_back(subset);
        }
        
        return ans;
    }
};
Time complexity - O(2^(n)*n)
Space complexity - O(2^(n))


*/