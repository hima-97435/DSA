/*
Name - Himanshu Pokhriyal
Date - 5 April, 2024
Version - C++ 17


Ques-1 Flip the cards
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n,x;
	    cin>>n>>x;
	    cout<<(min(n-x,x))<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)


Ques-2 Bath in Winters
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BATH

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int x,y;
	    cin>>x>>y;
	    cout<<(x/(y*2))<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)

*/