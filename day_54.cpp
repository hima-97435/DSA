/*
Name - Himanshu Pokhriyal
Date - 18 may , 2024
Version - C++ 17

Ques-1 Amusing Joke
Link - https://codeforces.com/problemset/problem/141/A

#include<bits/stdc++.h>
using namespace std;



int main(){
  string x,y,z;
  cin>>x>>y>>z;
  string final=x+y;
  sort(final.begin(),final.end());
  sort(z.begin(),z.end());
  

  if( final == z){
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;

  
  
  return 0;
}

Time complexity - O(n*logn)  ## n is size of final ( x+y )
Space complexity - O(1)

Ques-2 The New Year: Meeting Friends
Link - https://codeforces.com/problemset/problem/723/A

#include<bits/stdc++.h>
using namespace std;



int main(){
  int arr[3];
  for( int i=0;i<3;i++){
    cin>>arr[i];
  }
  sort(arr,arr+3);
  cout<<((arr[2]-arr[1])+(arr[1]-arr[0]));
  
  return 0;
}

  

*/