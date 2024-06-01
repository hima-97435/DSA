/*
Name - himanshu Pokhriyal
Version - C++ 17
Date - 1 June , 2024


Ques-1 Subset Sum
Link -  https://www.naukri.com/code360/problems/subset-sum_630213?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

bool isSubsetPresent(int N, int K, vector<int> &A) {
  vector<vector<bool>> dp(N + 1, vector<bool>(K + 1, false));
    
    // Initialize the first column, as sum 0 is always possible
    for (int i = 0; i <= N; ++i) {
        dp[i][0] = true;
    }
    
    // Fill the dp table
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= K; ++j) {
            dp[i][j] = dp[i-1][j];
            if (j >= A[i-1]) {
                dp[i][j] = dp[i][j] || dp[i-1][j - A[i-1]];
            }
        }
    }
    
    // The answer is in dp[N][K]
    return dp[N][K];
}

Time complexity - O(n*k)
space complexity - O(n*k)



*/