/*
Name - Himanshu Pokhriyal
Version - C++ 17
Date - 29 MAy , 2024


Ques-1 Check if Array Is Sorted and Rotated
Link - https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/


class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        for( int i=1;i<nums.size();i++){
            if( nums[i-1] > nums[i]) cnt++;
        }
        if( nums[(nums.size())-1] > nums[0]) cnt++;

        return cnt<=1;
    }
};

Time Complexity - O(N)
Space complexity - O(1)


Ques-2 Roman to Integer
Link - https://leetcode.com/problems/roman-to-integer/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;


        int ans=0;

        for( int i=0;i<s.length();i++){
            if(m[s[i]]< m[s[i+1]]){
                ans-=m[s[i]];
            }
            else {
                ans+=m[s[i]];

            }

        }
        return ans;
    }
};

time complexity - O(N)
space complexity - O(n)


*/