/*
Name - Himanshu Pokhriyal
Date - 25 May , 2024
Version - C++ 17

Ques-1 Kefa and First Steps
Rating - 900
Link -  https://codeforces.com/problemset/problem/580/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int curr_length=1,ans=INT_MIN;  // Initialize vector with size n
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // sort(arr.begin(), arr.end());

    for (int i = 1; i < n; ++i) {
        if( arr[i] >= arr[i-1]){
            curr_length++;
        }
        else{
            ans=max(ans,curr_length);
            curr_length=1;
        }
    }
    ans=max(ans,curr_length);
    cout<<ans<<endl;
    

    return 0;
}

Time complexity - O(n)
Space complexity - O(n)

Ques-2 Dubstep
Rating -900
Link - https://codeforces.com/problemset/problem/208/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Replace all "WUB" with spaces
    string wub = "WUB";
    size_t pos = 0;
    while ((pos = s.find(wub, pos)) != string::npos) {
        s.replace(pos, wub.length(), " ");
        pos += 1; // Move past this position
    }

    // Now we have the string with possible multiple spaces, let's clean them up
    string result;
    bool inWord = false;
    for (char ch : s) {
        if (ch != ' ') {
            result += ch;
            inWord = true;
        } else if (inWord) {
            result += ' ';
            inWord = false;
        }
    }

    // Remove trailing space if any
    if (!result.empty() && result.back() == ' ') {
        result.pop_back();
    }

    cout << result << endl;

    return 0;
}

Time complexity - O(n)
Space complexity - O(n) ## n here is size of string 



*/