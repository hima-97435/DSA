/*
NAme - Himanshu Pokhriyal
Date - 22 May, 2024
Version - C++17

Ques-1  Phone Desktop
Link - https://codeforces.com/problemset/problem/1974/A

#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while( t-- ){
    int x,y;
    cin>>x>>y;
    int ans=(y+1)/2;
    int rem=y/2*7+y%2*11;
    x=max(0,x-rem);
    ans+=(x+14)/15;
    cout<<ans<<endl;
   }
      return 0;
}

Time complexity - O(t)
Space complexity - O(1)

Ques-2 RCBCSK
Link -  https://www.codechef.com/START135D/problems/RCBCSK
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x,y;
    cin>>x>>y;
    if(y<x){
    if((x-y)>=18 ) cout<<"RCB"<<endl;
    else cout<<"CSK"<<endl;
    }
    else cout<<"CSK"<<endl;
}
Time complexity - O(1)
Space complexity - O(1)

Ques-3 Football Ties
Link -  https://www.codechef.com/START135D/problems/FOOTBALLTIES

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y;
	    cin>>x>>y;
	    cout<<x%3<<endl;
	}

}
Time complexity - O(t)
Space complexity - O(1)

Ques-4 Motivation
Link- https://www.codechef.com/practice/course/1to2stars/LP1TO201/problems/IMDB

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x;
	    cin>>n>>x;
	    vector<int> arr;
	    int a,b;
	    for( int i=0;i<n;i++){
	        cin>>a>>b;  
	        if(a<=x) arr.push_back(b);
	        
	    }
	    sort(arr.begin(),arr.end(),greater<int>());
	    cout<<arr[0]<<endl;
	    
	}

}

time complexity - O(t*n*n*log(n)) 
space complexity - O(n)
 
*/