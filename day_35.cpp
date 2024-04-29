/*
NAme - Himanshu Pokhriyal
Date - 29 April, 2024
Version - C++ 17



Ques-1 Sasta Shark Tank
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int a,b;
	    cin>>a>>b;
	    if(10*a>5*b) cout<<"FIRST"<<endl;
	    else if( 10*a == 5*b ) cout<<"ANY"<<endl;
	    else cout<<"SECOND"<<endl;
	}

}

Time complexity - O(t)
Space Complexity - O(1)

Ques-2 Good Program
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NIBBLE

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int t;
    cin>>t;
    while( t-- ){
        int x;
        cin>>x;
        if(x%4  != 0) cout<<"NOT GOOD"<<endl;
        else cout<<"GOOD"<<endl;
    }
}

Time complexity - O(t)
Space Complexity - O(1)


*/