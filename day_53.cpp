/*
Name - Himanshu Pokhriyal
Date - 17 MAy , 2024
Version - C++17

Ques-1 Word Capitalization
Link - https://codeforces.com/problemset/problem/281/A

#include<bits/stdc++.h>
using namespace std;

bool isCapitalized(const std::string& s) {
    if (s.empty()) {
        return false;
    }
    if (!isupper(s[0])) {
        return false;
    }
    for (size_t i = 1; i < s.length(); ++i) {
        if (!islower(s[i])) {
            return false;
        }
    }
    return true;
}

int main(){
    string x;
    cin>>x;
    if(!isCapitalized(x)) {
        x[0]=toupper(x[0]);
    }
    cout<<x<<endl;
    


  return 0;
}

Time complexity - O(n)
Space complexity - O(n)

Ques-2 Bear and Big Brother
Link - https://codeforces.com/problemset/problem/791/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b){
      
      a=a*3;
      b=b*2;
      cnt++;
    }
    cout<<cnt<<endl;

  return 0;
}

Time complexity - O(n) n == no of loop run until a<=b works.
Space complexity - O(1)

Ques-3 Stones on the Table
Link - https://codeforces.com/problemset/problem/266/A

#include<bits/stdc++.h>
using namespace std;



int main(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   int cnt=0;
   for( int i=1;i<n;i++){
    if(s[i] == s[i-1]){
      cnt++;
    }
   }
   cout<<cnt<<endl;
  return 0;
}
 
Time complexity - O(n)
Space complexity - O(n)

Ques-4 Elephant
Link - https://codeforces.com/problemset/problem/617/A


#include<bits/stdc++.h>
using namespace std;



int main(){
   int n;
   cin>>n;
   int full_steps=n/5;
   int remaiing_steps=n%5;

   if(remaiing_steps != 0){
    full_steps++;
   }

   cout<<full_steps<<endl;
  return 0;
}

Time complexity - O(1)
Space complexity - O(1)


Ques-5 A. Soldier and Bananas
Link - https://codeforces.com/problemset?order=BY_RATING_ASC

#include<bits/stdc++.h>
using namespace std;



int main(){
   int k,n,w;
   cin>>k>>n>>w;
   int sum =k*(w*(w+1))/2;
   cout<<max(0,sum-n)<<endl;
   
  return 0;
}

Time complexity - O(1)
Space complexity - O(1)

Quess-6  Word
Link - https://codeforces.com/problemset/problem/59/A

#include<bits/stdc++.h>
using namespace std;



int main(){
  string x;
  cin>>x;
  int upper_count,lower_count=0;
  for( int i=0;i<x.length();i++){
    if(isupper(x[i])){
      upper_count++;
    }
    else{
      lower_count++;
    }

  }
   if(upper_count>lower_count) {
    for (int i = 0; i < x.length(); i++) {
    x[i] = toupper(x[i]);
  }
   }
   else {
          for (int i = 0; i < x.length(); i++) {
    x[i] = tolower(x[i]);
  }  
   }

   cout<<x<<endl;


  return 0;
}

Time compelxity - O(n)
Space complexity - O(n) ## n here is string length.



*/