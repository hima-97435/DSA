/*
Name - Himanshu Pokhriyal
Version - C++ 17
Date - 6 June , 2024


Ques-1 A - Guess the Maximum
Link - https://codeforces.com/contest/1979/problem/A

#include <iostream>
#include <vector>
#include <algorithm> // for std::max and std::min
#include <limits.h>  // for INT_MAX
using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases
    
    while (t--) {
        int n;
        cin >> n; // size of the array
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i]; // reading the array elements
        }
        
        int global_min = INT_MAX;
        
        for (int i = 0; i < n; i++) {
            int local_max = a[i];
            for (int j = i + 1; j < n; j++) { // Start j from i + 1 to exclude single element subarrays
                local_max = max(local_max, a[j]);
                global_min = min(global_min, local_max);
            }
        }
        
        cout << global_min -1 << endl;
    }
    
    return 0;
}



*/