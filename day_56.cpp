/*
Name - Himanshu Pokhriyal
Date - 20 May , 2024
Version - C++17


Ques-1 Team Olympiad
Link - https://codeforces.com/problemset/problem/490/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> programming, math, pe;

    // Read the input and categorize the children by their skills
    for (int i = 0; i < n; i++) {
        int skill;
        cin >> skill;
        if (skill == 1) {
            programming.push_back(i + 1); // store 1-based index
        } else if (skill == 2) {
            math.push_back(i + 1); // store 1-based index
        } else if (skill == 3) {
            pe.push_back(i + 1); // store 1-based index
        }
    }

    // Calculate the maximum number of teams
    int teams = min({programming.size(), math.size(), pe.size()});
    cout << teams << endl;

    // Form and print each team
    for (int i = 0; i < teams; i++) {
        cout << programming[i] << " " << math[i] << " " << pe[i] << endl;
    }

    return 0;
}
Time complexity - O(n+n/3) max value of team could be = n/3
Space complexity - O(3*n) == O(n)

Ques-2 Medium Number
Link -  https://codeforces.com/problemset/problem/1760/A

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while( t-- ){
    int arr[3];
    for( int i=0;i<3;i++){
      cin>>arr[i];
    }
    sort(arr,arr+3);
    cout<<arr[1]<<endl;

  }
}

Time complexity - O(t*3*log(3)) == O(t)
Space complexity - O(1)



*/