/*
Name - Himanshu Pokhriyal
Date - 21 May , 2024
Version - C++17


Ques-1 To My Critics
Link - https://codeforces.com/problemset/problem/1850/A

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
while( t-- ){
  int arr[3];
  for( int i=0;i<3;i++){
    cin>>arr[i];
    
  }
  sort(arr, arr + 3, greater<int>());
  if(arr[0]+arr[1]>=10) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
   
    return 0;
}

Time complexity - O(t*3*log(3)) == O(t) t --> Test cases
Space complexity - O(3) == O(1)

Ques-2 160A - Twins
Link - https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    
    // Sort the coins in descending order
    sort(coins.rbegin(), coins.rend());
    
    int totalSum = accumulate(coins.begin(), coins.end(), 0);
    int takenSum = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        takenSum += coins[i];
        count++;
        if (takenSum > totalSum - takenSum) {
            break;
        }
    }
    
    cout << count << endl;
    return 0;
}

Time complexity - O(n+n*logn+n) == O(n*logn)
Space complexity - O(n) 

*/