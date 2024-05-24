/*
NAme - Himanshu Pokhriyal
Version - C++17
Date - 24 MAy , 2024


Ques-1 Wrong Subtraction
Link - https://codeforces.com/problemset/problem/977/A

#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k;
    cin>>n>>k;
    while( k--){
    int last_digit=n%10;
    if(last_digit == 0) {
        n =n/10;
    }
    else  n--;
    }
    cout<<n<<endl;
}
Time complexity - O(k)
Space complexity - O(1)

Ques-2   Football
Link - https://codeforces.com/problemset/problem/96/A

#include<bits/stdc++.h>
using namespace std;
string dangerous_or_not(const string& s){
 int count1 = 0, count0 = 0, max_cont = 7;
    for (char c : s) {
        if (c == '0') {
            count0++;
            count1 = 0;
        } else {
            count1++;
            count0 = 0;
        }
        if (count0 == max_cont || count1 == max_cont) {
            return "YES";
        }
    }
    return "NO";
}
int main(){
    string s;
    cin>>s;
    cout<<dangerous_or_not(s)<<endl;
   
}
Time complexity - O(n) { n== size of string}
Space complexity - O(1)


Ques-3 Even Odds
Link - https://codeforces.com/problemset/problem/318/A

#include<bits/stdc++.h>


using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;

    long long odd_till = (n + 1) / 2; // Correct calculation of the number of odd numbers

    if (k <= odd_till) {
        // k-th odd number
        cout << 1 + (k - 1) * 2 << endl;
    } else {
        // k-th even number
        k -= odd_till;
        cout << 2 + (k - 1) * 2 << endl;
    }

    return 0;
}

Time complexity - O(1)
Space complexity - O(1)

Ques-4  HQ9+
Link - https://codeforces.com/problemset/problem/133/A

#include<bits/stdc++.h>
using  namespace std;
string output_or_not(const string& s){
    for(char ch:s){
        if(ch == 'H' || ch == 'Q' || ch == '9'){
            return "YES";
        }
        
    }
    return "NO";
}

int main() {
    string s;
    cin>>s;
    cout<<output_or_not(s)<<endl;
    
}
Time complexity - O(n) ## n here is size of string
Space complexity - O(1)

Ques-5 Gravity Flip
Link - https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // Initialize vector with size n
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; ++i) {
        cout << arr[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}

Time complexity - O(n)
Space complexity - O(n)





*/