/*
NAme - himanshu pokhriyal
Version - C++17
Date - 31 May , 2024

Ques-1 Better String
Link - https://www.geeksforgeeks.org/problems/better-string/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=better-string

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
  
 int countDistinctSubsequences(const string &S) {
    int n = S.length();
    vector<int> dp(n + 1, 0);
    dp[0] = 1; // There's one subsequence for an empty string

    // Dictionary to store the last occurrence of each character
    unordered_map<char, int> lastOccurrence;

    for (int i = 1; i <= n; ++i) {
        char currentChar = S[i - 1];
        dp[i] = 2 * dp[i - 1];
        
        if (lastOccurrence.find(currentChar) != lastOccurrence.end()) {
            int j = lastOccurrence[currentChar];
            dp[i] -= dp[j - 1];
        }
        
        lastOccurrence[currentChar] = i;
    }

    return dp[n];
}

  
    string betterString(string str1, string str2) {
        // code here
        int count1 = countDistinctSubsequences(str1);
    int count2 = countDistinctSubsequences(str2);

    if (count1 > count2) {
        return str1;
    } else if (count1 < count2) {
        return str2;
    } else {
        return str1;
    }

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str1, str2;
        cin >> str1 >> str2;
        Solution obj;
        string ans = obj.betterString(str1, str2);
        cout << ans << "\n";
    }
}

time complexity - O(n)
space complexity - O(n)


Ques-2 Perfect Sum Problem
Link - https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=perfect-sum-problem
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
const int MOD = 1e9+7;
	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>> dp(n+1, vector<int>(sum+1,0));
        
        for( int i=0;i<=n;i++){
            dp[i][0]=1;
            
        }
        for( int i=1;i<=n;i++){
            for( int j=0;j<=sum;j++){
                dp[i][j]=dp[i-1][j];
                if( j>=arr[i-1]){
                    dp[i][j]=(dp[i][j]+dp[i-1][j-arr[i-1]])%MOD;
                }
            }
        }
        return dp[n][sum];
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends

Expected Time Complexity: O(N*sum)
Expected Auxiliary Space: O(N*sum)


*/