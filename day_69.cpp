/*
NAme - Himanshu Pokhriyal
Version - C++ 17
DAte - 2 June , 2024


Ques-1 Combination Sum
Link - https://leetcode.com/problems/combination-sum/description/

class Solution {
    public:
 void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
      if (ind == arr.size()) {
        if (target == 0) {
          ans.push_back(ds);
        }
        return;
      }
      // pick up the element 
      if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findCombination(ind, target - arr[ind], arr, ans, ds);
        ds.pop_back();
      }

      findCombination(ind + 1, target, arr, ans, ds);

    }   
    public:
     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,candidates,ans,ds);
        return ans;
    }
};

time complexity - O(2^t*k)
Space complexity - O(k*x)

##v
Approach here used is of pick and not pick and as said in question we can 
pick i element multiple time therefore if it oick the ekemnt it remains to 
that index only , if not then to further index .


Ques-2 Combination Sum II
Link - https://leetcode.com/problems/combination-sum-ii/description/

class Solution {
    public:
 void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
    if(target == 0){
        ans.push_back(ds);
        return;

    }
    for( int i = ind;i<arr.size();++i){
        if( i> ind && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        ds.push_back(arr[i]);
        findCombination(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back(); 
    }
    }   
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
         vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,candidates,ans,ds);
        

        return ans;
    }
};

Time complexity - O{(2^n)*k}
Space complexity - O(k*x)


#
Approach I followed here is firstly looping[i] from ind to (n-1) 
and then add that value in the vector and then do recursion 
tuntil we have to check few conditions checked
 whether the current value is greater than target and then we will quickly break 
 which is because we will not get further value in the array beacuse current value is graeter than target and since array is sorted in ascendinfg order we can't get the smaller element in further array
And also to ignore duplicate elment we check condition since it is being taken earlier .
And when recursion is complexted we pop the element added.




*/