/*
NAme - Himanshu Pokhriyal
Version - C++17
Date - 5 June , 2024

Ques-1 Binary Search
Link - https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&difficulty=Basic&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int left=0,right=n-1;
        while( left<=right){
            int mid=(left+right)/2;
            if(arr[mid] == k) return mid;
            else if(arr[mid] < k) {
                left=mid+1;
                
            }
            else {
                right=mid-1;
            }
        }
        
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends



*/