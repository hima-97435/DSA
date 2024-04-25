/*
Name - Himanshu Pokhriyal
Date - 25 April, 2024
Version - C++17



Ques-1 Car or Bike
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRAVELFAST

#Approach & Solution:
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b;
	    cin>>a>>b;
	    if(a<b) cout<<"BIKE"<<endl;
	    else if( a == b ) cout<<"SAME"<<endl;
	    else cout<<"CAR"<<endl;
	}

}

Time Complexity - O(t)
Space Complexity - O(1)

Ques-2 Is the Score Consistent
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRUESCORE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b;
	    cin>>a>>b;
	    int c,d;
	    cin>>c>>d;
	    if(a>c || b>d ) cout<<"IMPOSSIBLE"<<endl;
	    else cout<<"POSSIBLE"<<endl;
	    
	    
	}

}

Time Complexity - O(t)
Space Complexity - O(1)




*/