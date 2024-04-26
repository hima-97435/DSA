/*
Name - Himanshu Pokhriyal
Date - 26 April, 2024
Version - C++ 17


Ques-1 The Three Topics
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/THREETOPICS


#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,x;
	cin>>a>>b>>c>>x;
	if( a == x || b == x || c == x) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;

}

Time Complexity - O(1)
Space Complexity - O(1)

Question -2 Monopoly
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int p,q,r,s;
	    cin>>p>>q>>r>>s;
	    if( p> (q+r+s)||q>(p+r+s) || r>(p+q+s) || s>(p+q+r))   cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}

}

Time Complexity - O(t)
Space Complexity - O(1)


*/