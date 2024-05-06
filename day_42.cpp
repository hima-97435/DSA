/*
Name - Himanshu pokhriyal
Version - C++17
Date - 6 April , 2024

Ques-1 Finding Shoes
Link - https://www.codechef.com/practice/course/logical-problems/#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(  t-- ){
	    int n,m;
	    cin>>n>>m;
	    if(n>=m)	    cout<<(n+abs(n-m))<<endl;
	    else if( n<m ) cout<<(n)<<endl;
	}

}

Time complexity - O(t)
Space complexity - O(1)


Ques-2 Mario and Transformation
Link - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>> t;
    while( t-- ){
        int x;
        cin>>x;
        
        if( x%3 == 0 ) cout<<"NORMAL"<<endl;
        else if( x%3 == 1 ) cout<<"HUGE"<<endl;
        else cout<<"SMALL"<<endl;
        
    }
}

Time complexity - O(t)
Space complexity - O(1)




*/