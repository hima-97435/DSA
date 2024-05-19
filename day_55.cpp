/*
Name - Himanshu Pokhriyal
Date - 19 May , 2024
Version - C++17

Ques-1 Remove Smallest
Link - https://codeforces.com/problemset/problem/1399/A

#include<bits/stdc++.h>
using namespace std;



int main(){
  int t;
  cin>>t;
  while( t--){
 int n;
 cin>>n;
 int array[n];
 bool flag =true;
 for( int i=0;i<n;i++){
  cin>>array[i];
 }
 sort(array,array+n);
 for( int j=n-1;j>0;j--){
  
        if(array[j]-array[j-1]> 1) {
          flag =false;
          break;
        }
  }
  if( flag == true ) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;

 }

  
  return 0;
}

  
  Time complexity - O(t*n)
  Space complexity - O(n)


Ques-2 Choosing Teams
Link - https://codeforces.com/problemset/problem/432/A

#include<bits/stdc++.h>
using namespace std;

int main(){


  int n , k;
  cin>>n>>k;
  
  int x=0;
  int cnt=0;
  for( int i=0;i<n;i++){
    cin>>x;
    if(x<=(5-k))   cnt++;
  }
  if( cnt<3) cout<<"0"<<endl;
  else cout<<cnt/3<<endl;

}

Time complexity - O(n)
Space complexiy - O(1)




*/