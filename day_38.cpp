/*
Name - Himanshu Pokhriyal
Date - 2 MAy,2024
Version -- C++17

Ques-1 Jenga Night
link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while ( t-- ){
	    int n,x;
	    cin>>n>>x;
	    if(n>x || x%n != 0) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)


Ques-2 Bus Seat Numbering
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while( t-- ){
	    int n;
	    cin>>n;
	    
	    if(n<=10) cout<<"Lower Double"<<endl;
	    else if( n>=10 && n<=15 ) cout<<"Lower Single"<<endl;
	    else if( n>15 && n<=25 ) cout<<"Upper Double"<<endl;
	    else cout<<"Upper Single"<<endl;
	    
	    
	}

}
Time complexity - O(t)
Space complexity - O(1)




*/