/*
Name - himanshu pokhriyal
Date - 13 mAy, 2024
Version - C++17

Ques-1 Permutation Difference between Two Strings1 
Link - https://leetcode.com/problems/permutation-difference-between-two-strings/submissions/1256040319/

class Solution {
public:
    int findPermutationDifference(string s, string t) {
        vector<int> a(26,0) , b(26,0);
        for( int i=0;i<s.size();i++){
            a[s[i]-'a']=i;
            b[t[i]-'a']=i;

        }
        int c=0;
        for( int i=0;i<26;i++){
            c+=abs(a[i]-b[i]);
        }
        return c;
    }
};

time complexity - O(n)  n= size of string 
space complexity - O(1)

Ques- 2 Taking Maximum Energy From the Mystic Dungeon
Link - https://leetcode.com/problems/taking-maximum-energy-from-the-mystic-dungeon/description/

class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
       int n = energy.size();
       vector<vector<int>> v(n+1);
       int ind=0;
       for( int i=0;i<n;i++){
        v[ind].push_back(energy[i]);
        ind++;
        if( ind == k) ind=0;

       }
       int ans=INT_MIN;
       for( auto it:v){
        if(it.size()>0){
            int sufs=0;
            for(int i=it.size()-1;i>=0;i--){
                sufs+=it[i];
                ans=max(sufs,ans);
            }
        }
       }
       return  ans;
    }
};
Time complexity - O(n);
space complexity - O(n)

Ques- 3 Second Largest

Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	int array[3];
	for( int i =0;i<3;i++) cin>>array[i];
	sort(array,array+3);
	cout<<array[1]<<endl;
	
}
}
Time complexity - O(n);
space complexity - O(1)

Ques-4 Pass or Fail
Link -  https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x,p;
	    cin>>n>>x>>p;
	    int chef_score=x*3-(n-x)*1;
	    if(chef_score>=p) cout<<"Pass"<<endl;
	    else cout<<"Fail"<<endl;
	    
	}
	

}

Time complexity - O(t)
Space complexity - O(1)

Ques-5 Cyclic Quadrilateral
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+c != 180 || b+d  != 180 ) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

Ques-6  Generate Parentheses
Link - https://leetcode.com/problems/generate-parentheses/description/

void backtrack(int n, int leftCount, int rightCount, vector<char>& output,
               vector<string>& result) {
    // Base case where count of left and right braces is "n"
    if (leftCount >= n && rightCount >= n) {
        // Join the array elements into a string without any separators.
        string outputStr(output.begin(), output.end());
        result.push_back(outputStr);
    }

    // Case where we can still append left braces
    if (leftCount < n) {
        output.push_back('(');
        backtrack(n, leftCount + 1, rightCount, output, result);
        output.pop_back();
    }

    // Case where we append right braces if the current count of right braces is
    // less than the count of left braces
    if (rightCount < leftCount) {
        output.push_back(')');
        backtrack(n, leftCount, rightCount + 1, output, result);
        output.pop_back();
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        vector<char> output;
        backtrack(n, 0, 0, output, result);
        return result;
    }
};

Time complexity - O(n);
Space complexity - O(n)



*/